/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbuffer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 20:22:33 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 20:25:26 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CBUFFER_H
# define CBUFFER_H

typedef struct		s_cbuffer
{
	int				*buffer;
	unsigned long	size;

	int				*start;
	int				*end;

}					t_cbuffer;

#endif
