/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_checker_cylinder.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtanemu <shtanemu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:57:34 by shtanemu          #+#    #+#             */
/*   Updated: 2023/06/25 18:57:34 by shtanemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "conf_validation.h"

static bool	fmt_checker_is_double(char **contents)
{
	if (ft_isdouble(contents[COL_INDEX_DIAMETER_CYLINDER]) == 0)
	{
		put_error(ERROR_INVALID_DIAMETER_CYLINDER);
		return (false);
	}
	if (ft_isdouble(contents[COL_INDEX_HEIGHT_CYLINDER]) == 0)
	{
		put_error(ERROR_INVALID_HEIGHT_CYLINDER);
		return (false);
	}
	return (true);
}

static bool	fmt_checker_cylinder_main_contents(char **contents)
{
	if (is_valid_coordinates(contents[COL_INDEX_COORDINATES_CYLINDER]) == false)
	{
		put_error(ERROR_INVALID_COODINATES_CYLINDER);
		return (false);
	}
	if (is_valid_orientation_vector(contents[COL_INDEX_OV_CYLINDER]) == false)
	{
		put_error(ERROR_INVALID_OV_CYLINDER);
		return (false);
	}
	if (fmt_checker_is_double(contents) == false)
		return (false);
	if (is_valid_rgb_in_range(contents[COL_INDEX_RGB_COLOR_CYLINDER]) == false)
	{
		put_error(ERROR_INVALID_RGB_COLOR_VALUE);
		return (false);
	}
	return (true);
}

static bool	fmt_checker_cylinder_extra_contents(\
	char **contents, const size_t n_contents\
)
{
	if (n_contents == N_CONTENTS_CYLINDER_PLUS)
	{
		contents[COL_INDEX_SR_CYLINDER] \
			= ft_strtrim_free_s1(contents[COL_INDEX_SR_CYLINDER], "\n");
		if (is_valid_specular_reflection(contents[COL_INDEX_SR_CYLINDER]) \
			== false)
		{
			put_error(ERROR_INVALID_SR);
			return (false);
		}
	}
	return (true);
}

bool	fmt_checker_cylinder(const char *line)
{
	char	**contents;
	size_t	n_contents;
	bool	is_valid;

	contents = ft_split(line, ' ');
	n_contents = count_char_matrix_rows(contents);
	if (n_contents != N_CONTENTS_CYLINDER \
		&& n_contents != N_CONTENTS_CYLINDER_PLUS)
	{
		free_char_matrix(contents);
		put_error(ERROR_INVALID_N_CONTENTS_CYLINDER);
		return (false);
	}
	if (fmt_checker_cylinder_main_contents(contents) == false)
	{
		free_char_matrix(contents);
		return (false);
	}
	is_valid = fmt_checker_cylinder_extra_contents(contents, n_contents);
	free_char_matrix(contents);
	return (is_valid);
}
