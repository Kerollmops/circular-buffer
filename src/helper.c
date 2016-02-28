/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 22:20:15 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:23:11 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cbuffer.h"

unsigned long	real_buffer_pos(t_cbuffer const *cbuffer, unsigned long pos)
{
	unsigned long	new_pos;

	new_pos = cbuffer->start + pos;
	if (new_pos > cbuffer->size)
		return (new_pos - cbuffer->size);
	return (new_pos);
}
