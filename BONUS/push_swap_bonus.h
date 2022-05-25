/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:57:59 by skasmi            #+#    #+#             */
/*   Updated: 2022/05/24 23:33:36 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# define BUFFER_SIZE 1

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_int{
	int	l;
	int	p;
	int	k;
	int	j;
	int	i;
	int	pivot_3;
	int	pivot_2;
	int	p_pivot;
}	t_int;

typedef struct s_stack{
	int	*tab;
	int	size;
	int	used;
}	t_stack;

typedef struct s_table{
	t_stack	a;
	t_stack	b;
}	t_table;

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_is_separator(char c, char cr);
int		ft_words(char *str, char c);
void	ft_write_word(char *dest, char *src, char c);
int		ft_write_split(char **split, char *str, char c);
char	**ft_split(char *s, char c);
int		ft_isdigit(int a);
void	ft_putstr_fd(char *s,	int fd);
int		ft_hexa(unsigned long n, int s);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_unsigned_int(unsigned int n);
int		ft_putchar(char c);
int		ft_printf(const char *format, ...);
void	print(char c, va_list cp, int *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_checknumbers_bonus(char **av);
void	ft_free_all_bonus(char **str);
int		ft_count_bonus(char **str, int k, int j);
void	ft_cont_bonus(char **num, int k, int j, int *sum);
int		*ft_double_bonus(char **av, int sum);
int		ft_atoi_custom_bonus(const	char	*str, char **num);
void	ft_error_bonus(char **num);
void	ft_cont1_bonus(char **num, t_int *ints, int *tab);
int		ft_check_sorted_bonus(t_table *m);
void	ft_free_stack_bonus(t_table *m);
void	ft_malloc_bonus(void *tab, int *hub, int *t, char **str);
void	ft_check(t_table *m);
void	ft_ifs(t_table *m, t_int var, char *tab);
void	ft_unknown_move(t_table *m);
char	*get_next_line(int fd);
char	*ft_strjoin_custom(char const *s1,	char const *s2);
void	ft_over_bonus(char **num);
void	sa(t_table *m, t_int var);
void	sb(t_table *m, t_int var);
void	ss(t_table *m, t_int var);
void	pa(t_table *m, t_int var);
void	pb(t_table *m, t_int var);
void	ra(t_table *m, t_int var);
void	rb(t_table *m, t_int var);
void	rr(t_table *m, t_int var);
void	rra(t_table *m, t_int var);
void	rrb(t_table *m, t_int var);
void	rrr(t_table *m, t_int var);
#endif
