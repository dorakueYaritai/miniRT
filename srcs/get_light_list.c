#include "all.h"

t_dlist	*get_light_list(t_dlist **gb_list)
{
	t_dlist	*light_list;
	light_list = NULL;
	(void)gb_list;
	// (void)gb_list;
	// ft_dlstadd_back(&light_list, ft_dlstnew(
	// 	new_light(L_POINT, make_point_light_info(get_vec(30, 7.8, -5), b_color_get(0, 1.0, 1.0, 1.0), gb_list), gb_list)));
	return (light_list);
}