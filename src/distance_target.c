/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_target.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 21:36:26 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:23:31 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info_retrieving.h"

long		distance_target_end(t_cbuffer const *cbuffer, unsigned long pos)
{
	unsigned long	dist_right;
	unsigned long	dist_left;
	unsigned long	tmp;

	// right loop
	tmp = real_buffer_pos(cbuffer, pos);
	dist_right = 0;
	while (1)
	{
		if (tmp == cbuffer->end)
			break;
		else if (tmp == cbuffer->size - 1)
			tmp = 0;
		else
			++tmp;
		++dist_right;
	}

	// left deduction
	dist_left = (cbuffer->size - dist_right); // (+ 1) ???

	if (dist_right < dist_left)
		return (dist_right);
	return (-dist_left);
}
