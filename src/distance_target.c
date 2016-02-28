/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_target.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 21:36:26 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:55:28 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // delete

#include "info_retrieving.h"

long		distance_target_end(t_cbuffer const *cbuffer, unsigned long pos)
{
	unsigned long	dist_right;
	unsigned long	dist_left;
	unsigned long	tmp;

	// right distance
	tmp = real_buffer_pos(cbuffer, pos);
	if (tmp < cbuffer->end)
		dist_right = cbuffer->end - tmp;
	else
		dist_right = (cbuffer->size - tmp) + cbuffer->end;

	// left distance deduction
	dist_left = (cbuffer->size - dist_right);

	// DEBUG !!!
	printf("dist_right: %ld\n", dist_right);
	printf("dist_left: %ld\n", dist_left);

	if (dist_right <= dist_left)
		return (dist_right);
	return (-dist_left);
}
