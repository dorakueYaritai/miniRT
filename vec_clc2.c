/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_clc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 06:42:05 by kakiba            #+#    #+#             */
/*   Updated: 2023/04/23 20:37:43 by kakiba           ###   ########.fr       */
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

t_vec3	get_vec(double x, double y, double z)
{
	t_vec3	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

void	print_vec(t_vec3 vec, char *str)
{
	printf("%s x is %f,  y is %f, z is %f\n", str, vec.x, vec.y, vec.z);
}

// t_reflect	get_t_refrect(double am, double di, double sp, double sp_shininess)
t_reflect	get_t_refrect(t_color am, t_color di, t_color sp, t_color sp_shininess)
{
	t_reflect	ref;

	ref.am.color = am.color;
	ref.di.color = di.color;
	ref.sp.color = sp.color;
	ref.sp_shininess.color = sp_shininess.color;
}


t_color	get_color(double t, double r, double g, double b)
{
	t_color	color;

	color.trgb.t = t;
	color.trgb.r = r;
	color.trgb.g = g;
	color.trgb.b = b;
	return (color);
}

t_color	color_mult(t_color color, double k)
{
	t_color	ans;

	ans.color = color.color * k;
	ans.color = color.color * k;
	ans.color = color.color * k;
	return (ans);
}

t_color	color_add(t_color color1, t_color color2)
{
	t_color	ans;

	ans.trgb.t = color1.trgb.t + color2.trgb.t;
	ans.trgb.r = color1.trgb.r + color2.trgb.r;
	ans.trgb.g = color1.trgb.g + color2.trgb.g;
	ans.trgb.b = color1.trgb.b + color2.trgb.b;
	return (ans);
}
