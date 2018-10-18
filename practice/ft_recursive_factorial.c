/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 17:48:57 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/17 18:08:26 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 1)
		return (1);
	else
		return (res * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	ft_recursive_factorial(5);
	return (0);
}
