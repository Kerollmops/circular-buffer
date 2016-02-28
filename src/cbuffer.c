/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbuffer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 20:21:29 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:25:00 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "info_retrieving.h"

static void		display_array(t_cbuffer const *cbuffer)
{
	unsigned long	i;

	i = cbuffer->start;
	printf("[ ");
	while (1)
	{
		printf("%d ", cbuffer->buffer[i]);

		if (i == cbuffer->end)
			break;
		else if (i == cbuffer->size - 1)
			i = 0;
		else
			++i;
	}
	printf("]\n");
}

int				main(void)
{
	t_cbuffer		cbuffer;
	long			dist_target;
	unsigned long	pos;

	// init cbuffer
	cbuffer.size = 7;
	cbuffer.buffer = (int*)malloc(sizeof(int) * cbuffer.size);
	// bzero(cbuffer.buffer, sizeof(int) * cbuffer.size);

	// init buffer
	cbuffer.buffer[0] = 6;
	cbuffer.buffer[1] = 0;
	cbuffer.buffer[2] = 1;
	cbuffer.buffer[3] = 2;
	cbuffer.buffer[4] = 3;
	cbuffer.buffer[5] = 4;
	cbuffer.buffer[6] = 5;

	// init start/end
	cbuffer.start = 1;
	cbuffer.end = 0;

	// target pos
	pos = 2;
	dist_target = distance_target_end(&cbuffer, pos);

	display_array(&cbuffer);
	printf("dist from (%ld) to end is: %ld\n", pos, dist_target);
	return (0);
}
