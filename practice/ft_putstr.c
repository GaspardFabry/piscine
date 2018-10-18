/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 14:27:34 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/18 00:51:48 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
