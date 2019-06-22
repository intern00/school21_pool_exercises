/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:28:57 by ksticks           #+#    #+#             */
/*   Updated: 2019/06/13 14:28:58 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H
# define MIN_INT32	-2147483648
# define ABS(x)		x < 0 ? ((x == MIN_INT32) ? 0 : -x) : x

#endif