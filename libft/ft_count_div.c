/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_div.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:25:17 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/04 20:26:14 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_div(char **div)
{
	int	i;

	i = 0;
	while (div[i])
		i++;
	return (i);
}
