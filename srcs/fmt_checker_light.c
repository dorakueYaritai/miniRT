/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_checker_light.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtanemu <shtanemu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:18:44 by shtanemu          #+#    #+#             */
/*   Updated: 2023/06/25 18:18:44 by shtanemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "conf_validation.h"

static bool	core_fmt_checker_light(char **contents)
{
	if (is_valid_coordinates(contents[COL_INDEX_COORDINATES_LIGHT]) == false)
	{
		put_error(ERROR_INVALID_COODINATES_LIGHT);
		return (false);
	}
	if (is_valid_ratio_in_range(\
		contents[COL_INDEX_LIGHT_RATIO], LLIMIT_LIGHT, ULIMIT_LIGHT) == false)
	{
		put_error(ERROR_INVALID_LIGHT_RATIO);
		return (false);
	}
	if (is_valid_rgb_in_range(contents[COL_INDEX_RGB_COLOR_LIGHT]) == false)
	{
		put_error(ERROR_INVALID_RGB_COLOR_VALUE);
		return (false);
	}
	return (true);
}

bool	fmt_checker_light(const char *line)
{
	char	**contents;
	bool	is_valid;

	if (is_valid_n_contents(line, N_CONTENTS_LIGHT) == false)
	{
		put_error(ERROR_INVALID_N_CONTENTS_LIGHT);
		return (false);
	}
	contents = ft_split(line, ' ');
	is_valid = core_fmt_checker_light(contents);
	free_char_matrix(contents);
	return (is_valid);
}

static bool	check_ratio_and_rgb(char **contents)
{
	if (is_valid_ratio_in_range(\
		contents[COL_INDEX_SL_RATIO], LLIMIT_LIGHT, ULIMIT_LIGHT) == false)
	{
		put_error(ERROR_INVALID_SL_RATIO);
		return (false);
	}
	if (is_valid_rgb_in_range(contents[COL_INDEX_RGB_COLOR_SL]) == false)
	{
		put_error(ERROR_INVALID_RGB_COLOR_VALUE);
		return (false);
	}
	return (true);
}

static bool	core_fmt_spot_checker_light(char **contents)
{
	if (is_valid_coordinates(contents[COL_INDEX_COORDINATES_SL]) == false)
	{
		put_error(ERROR_INVALID_COODINATES_SL);
		return (false);
	}
	if (is_valid_orientation_vector(contents[COL_INDEX_SL_OV]) == false)
	{
		put_error(ERROR_INVALID_OV_SL);
		return (false);
	}
	if (is_valid_fov(contents[COL_INDEX_SL_APEX_ANGLE]) == false)
	{
		put_error(ERROR_INVALID_APEX_ANGLE_SL);
		return (false);
	}
	return (check_ratio_and_rgb(contents));
}

bool	fmt_checker_spot_light(const char *line)
{
	char	**contents;
	bool	is_valid;

	if (is_valid_n_contents(line, N_CONTENTS_SL) == false)
	{
		put_error(ERROR_INVALID_N_CONTENTS_SL);
		return (false);
	}
	contents = ft_split(line, ' ');
	is_valid = core_fmt_spot_checker_light(contents);
	free_char_matrix(contents);
	return (is_valid);
}
