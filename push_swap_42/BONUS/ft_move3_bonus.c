/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move3_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:54:23 by skasmi            #+#    #+#             */
/*   Updated: 2022/05/24 23:40:01 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrr(t_table *m, t_int var)
{
	rra(m, var);
	rrb(m, var);
}

void	ft_unknown_move(t_table *m)
{
	ft_putstr_fd("Error\n", 2);
	ft_free_stack_bonus(m);
	exit(1);
}

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s1[n])
		n++;
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
