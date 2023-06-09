/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_orientation_vector.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtanemu <shtanemu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:10:01 by shtanemu          #+#    #+#             */
/*   Updated: 2023/06/25 18:10:01 by shtanemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft.h"
#include "conf_validation.h"

static bool	core_is_valid_orientation_vector(char **orientation_vector)
{
	size_t	i_ov;
	double	value;
	bool	has_non_zero;

	i_ov = 0;
	has_non_zero = false;
	while (orientation_vector[i_ov] != NULL)
	{
		orientation_vector[i_ov] \
			= strremove_free(orientation_vector[i_ov], "\n");
		orientation_vector[i_ov] \
			= strremove_free(orientation_vector[i_ov], "\r");
		if (ft_strlen_s(orientation_vector[i_ov]) == 0 \
			|| ft_isdouble(orientation_vector[i_ov]) == 0)
			return (false);
		value = ft_atof(orientation_vector[i_ov]);
		if (value < LLIMIT_OV || value > ULIMIT_OV)
			return (false);
		if (value != 0.0)
			has_non_zero = true;
		i_ov++;
	}
	if (has_non_zero == false)
		return (false);
	return (true);
}

bool	is_valid_orientation_vector(const char *orientation_vector_str)
{
	char	**orientation_vector;
	bool	is_valid;

	orientation_vector = ft_split(orientation_vector_str, ',');
	if (count_char_matrix_rows(orientation_vector) != 3)
	{
		free_char_matrix(orientation_vector);
		return (false);
	}
	is_valid = core_is_valid_orientation_vector(orientation_vector);
	free_char_matrix(orientation_vector);
	return (is_valid);
}
