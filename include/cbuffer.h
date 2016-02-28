/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbuffer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 20:22:33 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 23:03:25 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CBUFFER_H
# define CBUFFER_H

typedef struct		s_cbuffer
{
	int				*buffer;
	unsigned long	size;

	unsigned long	start;
	unsigned long	end;

}					t_cbuffer;

unsigned long		real_buffer_pos(t_cbuffer const *cbuffer, unsigned long p);
int					*get_value_pos(t_cbuffer const *cbuffer, unsigned long pos);

#endif
