/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbuffer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 20:21:29 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:59:42 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "info_retrieving.h"

static void		display_buffer(t_cbuffer const *cbuffer)
{
	unsigned long	i;

	i = cbuffer->start;
	printf("Circular buffer: [ ");
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
	cbuffer.size = 6;
	cbuffer.buffer = (int*)malloc(sizeof(int) * cbuffer.size);
	// bzero(cbuffer.buffer, sizeof(int) * cbuffer.size);

	// init buffer
	cbuffer.buffer[0] = 0;
	cbuffer.buffer[1] = 1;
	cbuffer.buffer[2] = 2;
	cbuffer.buffer[3] = 3;
	cbuffer.buffer[4] = 4;
	cbuffer.buffer[5] = 5;

	// init start/end
	cbuffer.start = 1;
	cbuffer.end = 0;

	// display buffer
	display_buffer(&cbuffer);

	// infos
	printf("Start (pos: %ld, value: %d)\n", cbuffer.start, cbuffer.buffer[cbuffer.start]);
	printf("End (pos: %ld, value: %d)\n", cbuffer.end, cbuffer.buffer[cbuffer.end]);

	// target pos
	pos = 2;
	dist_target = distance_target_end(&cbuffer, pos);

	printf("dist from (pos: %ld, value: %d) to (pos: end, value: %d) is: %ld\n",
						pos, *get_value(&cbuffer, pos),
						cbuffer.buffer[cbuffer.end], dist_target);
	return (0);
}
