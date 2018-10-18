/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 21:02:33 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/17 21:12:02 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	res = nb;
	if (nb < 1)
		return (0);
	while (i != power)
	{
		(res *= nb);
		i++;
	}
	return (res);
}
