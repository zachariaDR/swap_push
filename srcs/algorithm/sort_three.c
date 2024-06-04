/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:39:33 by ael-khni          #+#    #+#             */
/*   Updated: 2024/05/30 18:55:58 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	min;

	if (is_sorted(*a))
		return ;
	min = get_elem_index(*a, get_min(a));
	if (min == 1)
	{
		if (a->top->data > a->bottom->data)
			ra_rotate_a(a, false);
		else
			sa_swap_a(a, false);
	}
	else if (min == 2)
	{
		if (a->top->data > a->top->bellow->data)
			(sa_swap_a(a, false), rra_reverse_rotate_a(a, false));
		else
			rra_reverse_rotate_a(a, false);
	}
	else
		(sa_swap_a(a, false), ra_rotate_a(a, false));
}
