/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:34:00 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/08 17:34:00 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int str)
{
	if ((str >= '0' && str <= '9'))
		return (1);
	return (0);
}