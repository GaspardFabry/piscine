/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/18 16:19:47 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/18 16:39:46 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char*src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i])
	{
		ft_putchar(dest[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_strcpy("", "ff testen jwz");
	return (0);
}
