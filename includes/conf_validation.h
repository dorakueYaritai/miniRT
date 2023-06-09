/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conf_validation.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kakiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:41:45 by shtanemu          #+#    #+#             */
/*   Updated: 2023/07/04 15:37:08 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONF_VALIDATION_H
# define CONF_VALIDATION_H

# define ERROR_MESSAGE_FORMAT "[Error]: miniRT: "
# define COLOR_STR_RED_FRONT "\x1b[31m"
# define COLOR_STR_RED_BACK "\x1b[0m"

# define ERROR_ESSENTTIAL_IDENTIFIER "The number of dentifiers \
A and C is invalid."
# define ERROR_INVALID_IDENTIFIER "A given identifier is invalid."
# define ERROR_INVALID_AMBIENT_LIGHT_RATIO "A given ambient lighting's \
ratio is invalid."
# define ERROR_INVALID_N_CONTENTS_AMBIENT_LIGHT "A given ambient lighting's \
does'nt have the valid number of contents."

# define COL_INDEX_AMBIENT_LIGHT_RATIO 1
# define COL_INDEX_AMBIENT_RGB_COLOR 2
# define N_CONTENTS_AMBIENT_LIGHT 3

# define ERROR_INVALID_N_CONTENTS_CAMERA "A given camera's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_CAMERA "A given camera's \
coordinates is invalid."
# define ERROR_INVALID_OV_CAMERA "A given camera's \
orientaion vector is invalid."
# define ERROR_INVALID_FOV_CAMERA "A given camera's \
fov is invalid."

# define COL_INDEX_COORDINATES_CAMERA 1
# define COL_INDEX_OV_CAMERA 2
# define COL_INDEX_FOV_CAMERA 3
# define N_CONTENTS_CAMERA 4

# define ERROR_INVALID_N_CONTENTS_LIGHT "A given light's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_LIGHT "A given light's \
coordinates is invalid."
# define ERROR_INVALID_LIGHT_RATIO "A given light's \
ratio is invalid."

# define COL_INDEX_COORDINATES_LIGHT 1
# define COL_INDEX_LIGHT_RATIO 2
# define COL_INDEX_RGB_COLOR_LIGHT 3
# define N_CONTENTS_LIGHT 4

# define ERROR_INVALID_N_CONTENTS_SL "A given spot light's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_SL "A given spot light's \
coordinates is invalid."
# define ERROR_INVALID_OV_SL "A given spot light's \
orientaion vector is invalid."
# define ERROR_INVALID_APEX_ANGLE_SL "A given spot light's \
apex angle is invalid."
# define ERROR_INVALID_SL_RATIO "A given spot light's \
ratio is invalid."

# define COL_INDEX_COORDINATES_SL 1
# define COL_INDEX_SL_OV 2
# define COL_INDEX_SL_APEX_ANGLE 3
# define COL_INDEX_SL_RATIO 4
# define COL_INDEX_RGB_COLOR_SL 5
# define N_CONTENTS_SL 6

# define ERROR_INVALID_N_CONTENTS_SPHERE "A given sphere's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_SPHERE "A given sphere's \
coordinates is invalid."
# define ERROR_INVALID_DIAMETER_SPHERE "A given sphere's \
diameter is invalid."

# define COL_INDEX_COORDINATES_SPHERE 1
# define COL_INDEX_DIAMETER_SPHERE 2
# define COL_INDEX_RGB_COLOR_SPHERE 3
# define COL_INDEX_SR_SPHERE 4
# define N_CONTENTS_SPHERE 4
# define N_CONTENTS_SPHERE_PLUS 5

# define ERROR_INVALID_N_CONTENTS_PLANE "A given plane's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_PLANE "A given plane's \
coordinates is invalid."
# define ERROR_INVALID_OV_PLANE "A given plane's \
orientaion is invalid."

# define COL_INDEX_COORDINATES_PLANE 1
# define COL_INDEX_OV_PLANE 2
# define COL_INDEX_RGB_COLOR_PLANE 3
# define COL_INDEX_SR_PLANE 4
# define N_CONTENTS_PLANE 4
# define N_CONTENTS_PLANE_PLUS 5

# define ERROR_INVALID_N_CONTENTS_CYLINDER "A given cylinder's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_CYLINDER "A given cylinder's \
coordinates is invalid."
# define ERROR_INVALID_OV_CYLINDER "A given cylinder's \
orientaion is invalid."
# define ERROR_INVALID_DIAMETER_CYLINDER "A given cylinder's \
diameter is invalid."
# define ERROR_INVALID_HEIGHT_CYLINDER "A given cylinder's \
height is invalid."

# define COL_INDEX_COORDINATES_CYLINDER 1
# define COL_INDEX_OV_CYLINDER 2
# define COL_INDEX_DIAMETER_CYLINDER 3
# define COL_INDEX_HEIGHT_CYLINDER 4
# define COL_INDEX_RGB_COLOR_CYLINDER 5
# define COL_INDEX_SR_CYLINDER 6
# define N_CONTENTS_CYLINDER 6
# define N_CONTENTS_CYLINDER_PLUS 7

# define ERROR_INVALID_N_CONTENTS_CONE "A given cone's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_CONE "A given cone's \
coordinates is invalid."
# define ERROR_INVALID_OV_CONE "A given cone's \
orientaion is invalid."
# define ERROR_INVALID_DIAMETER_CONE "A given cone's \
diameter is invalid."
# define ERROR_INVALID_HEIGHT_CONE "A given cone's \
height is invalid."

# define ERROR_INVALID_RGB_COLOR_VALUE "A given rgb value is invalid."
# define ERROR_INVALID_SR "A given specular reflection value \
is invalid."

# define N_CONTENTS_TRIANGLE 5
# define SPEC_REF_INFO 1

# define ERROR_INVALID_N_CONTENTS_TRIANGLE "A given triangle's \
does'nt have the valid number of contents."
# define ERROR_INVALID_COODINATES_TRIANGLE "A given triangle's \
coordinates is invalid."

# define COL_RGB_INDEX_RED 0
# define COL_RGB_INDEX_GREEN 1
# define COL_RGB_INDEX_BLUE 2

# define LLIMIT_AMBIENT_LIGHT 0.0
# define ULIMIT_AMBIENT_LIGHT 1.0
# define LLIMIT_LIGHT 0.0
# define ULIMIT_LIGHT 1.0
# define LLIMIT_RGB 0
# define ULIMIT_RGB 255
# define LLIMIT_OV -1
# define ULIMIT_OV 1
# define LLIMIT_FOV 0
# define ULIMIT_FOV 180
# define LLIMIT_SR 0.0
# define ULIMIT_SR 1.0

# define RT_DESCRIPTOR ".rt"
# define ERROR_INVALID_FILE_DESCRIPTOR "A given file's descriptor is invalid."

# define ERROR_INVALID_N_ARGUMENTS "The number of \
arguments passed is invalid."

# include <stdlib.h>
# include <stdbool.h>

bool		is_valid(char *filepath, const int argc);
void		put_error(const char *message);
bool		has_valid_format(const char *filepath);
int			open_valid_file(const char *filepath);
char		*get_identifier(char *line);
bool		has_essental_identifers(const char *filepath);
bool		has_valid_identifers(char *filepath);
bool		is_valid_rgb_in_range(char *rgb_str);
bool		is_valid_specular_reflection(char *specular_reflection_str);
bool		is_valid_ratio_in_range(\
	char *ratio_str, const double llim, const double ulim\
);
bool		is_valid_n_contents(const char *line, const size_t n_contents);
bool		is_valid_coordinates(const char *coordinates_str);
bool		is_valid_fov(char *fov_str);
bool		is_valid_orientation_vector(const char *orientation_vector_str);
bool		fmt_checker_light(const char *line);
bool		fmt_checker_spot_light(const char *line);
bool		fmt_checker_camera(const char *line);
bool		fmt_checker_sphere(const char *line);
bool		fmt_checker_plane(const char *line);
bool		fmt_checker_cylinder(const char *line);
bool		fmt_checker_cone(const char *line);
bool		fmt_checker_triangle(const char *line);

#endif
