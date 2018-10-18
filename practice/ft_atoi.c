/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gfabry <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/18 14:53:56 by gfabry        #+#    #+#                 */
/*   Updated: 2018/10/18 15:43:23 by gfabry        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 1;
	neg = 0;
	res = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\v' || str[i] =='\f' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		res *= 10;
		res = (int)str[i] - '0';
	}
	if (neg == '1')
		return (-res);
	else
		return (res);
}
