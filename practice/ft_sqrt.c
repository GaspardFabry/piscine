/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 23:15:52 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/18 00:48:22 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 0;
	while (i <= nb / 2)
	{
		sq = (i * i);
		if (sq == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_sqrt(484);
	return (0);
}
