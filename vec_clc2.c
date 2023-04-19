/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_clc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 06:42:05 by kakiba            #+#    #+#             */
/*   Updated: 2023/04/19 20:35:27 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

// ret = |vec1| * |vec1|
double	vec_mag_sq(t_vec3 va)
{
	return ((va.x * va.x) + (va.y * va.y) + (va.z * va.z));
}

// ret = |vec1|
double	vec_mag(t_vec3 va)
{
	return (sqrt(vec_mag_sq(va)));
}

void	set_vec3(t_vec3 *vec, double x, double y, double z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
}

t_vec3	vec_normilize(t_vec3 vec)
{
	return (vec_mult(vec, 1.0 / vec_mag(vec)));
}

void	print_vec(t_vec3 vec, char *str)
{
	printf("%s x is %f,  y is %f, z is %f\n", str, vec.x, vec.y, vec.z);
}