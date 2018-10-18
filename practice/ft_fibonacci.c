/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/17 21:33:29 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/17 21:33:37 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int tmp;
	int tmp2;
	int res;
	int counter;

	counter = 1;
	tmp = 1;
	tmp2 = 0;
	res = 0;
	if (index <= 0)
		return (0);
	while (counter != index)
	{
		res = (tmp + tmp2);
		counter++;
		tmp2 = tmp;
		tmp = res;
	}
	return (res);
}
