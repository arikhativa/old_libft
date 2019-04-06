/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:53:54 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/04 12:29:10 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int n, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		((*(char*)(ptr + i))) = n;
		i++;
	}
	return (ptr);
}
