/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 16:11:02 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/17 16:34:59 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	res = 1;
	i = 1;
	if (nb < 0 || nb >= 12)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		(res = (i * res));
		i++;
	}
	return (res);
}

int	main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
