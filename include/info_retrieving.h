/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_retrieving.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 20:26:35 by crenault          #+#    #+#             */
/*   Updated: 2016/02/28 22:00:19 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_RETRIEVING_H
# define INFO_RETRIEVING_H

# include "cbuffer.h"

// if negative it's left
long		distance_target_end(t_cbuffer const *cbuffer, unsigned long pos);

#endif
