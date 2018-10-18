/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 18:36:45 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/17 21:12:25 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = nb;
	i = power;
	if (nb <= 0 || power <= 0)
		return (0);
	while (i > 1)
	{
		res *= nb;
		i--;
	}
	return (res);
}
