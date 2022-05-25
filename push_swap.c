/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:42:13 by skasmi            #+#    #+#             */
/*   Updated: 2022/05/24 23:38:36 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(void *tab, int *hub, int *t, char **str)
{
	int	i;

	i = 0;
	if (tab == NULL)
	{
		ft_putstr_fd("malloc error\n", 2);
		free(hub);
		free(t);
		while (str[i] != NULL)
			free(str[i++]);
		free(str);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_table	m;

	if (ac == 1)
		return (0);
	m.a.size = ft_checknumbers(av);
	m.a.tab = ft_double(av, m.a.size);
	m.a.used = m.a.size;
	if (ft_check_sorted(&m) == 1)
		return (free(m.a.tab), 0);
	m.b.size = m.a.size;
	m.b.tab = (int *)malloc(m.b.size * sizeof(int));
	m.b.used = 0;
	ft_sorting(&m, m.a.size);
	return (0);
}
