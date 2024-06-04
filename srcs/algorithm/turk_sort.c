/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:42:02 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 18:56:17 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_sort(t_stack *a, t_stack *b)
{
	int	push;
	int	near;

	if (is_sorted(*a))
		return ;
	pb_push_b(a, b);
	pb_push_b(a, b);
	while (a->size > 3)
	{
		push = find_cheap_nb(a, b);
		near = get_position_b(*b, push);
		do_chep_moves(a, b, push, near);
		pb_push_b(a, b);
	}
	sort_three(a);
	while (b->size > 0)
	{
		near = get_position_a(*a, b->top->data);
		make_elem_top(a, near);
		pa_push_a(a, b);
	}
	make_elem_top(a, get_min(a));
}
