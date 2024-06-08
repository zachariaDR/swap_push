/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:47 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:54:10 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* sa: swap a - swap the first 2 elements at the top of stack a. 
 * (do nothing if there is only one or no elements). */
void	sa_swap_a(t_stack *a, int flag)
{
	int	tmp;

	if (is_empty(a) || a->size == 1)
		return ;
	tmp = a->top->data;
	a->top->data = a->top->bellow->data;
	a->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sa\n");
}
