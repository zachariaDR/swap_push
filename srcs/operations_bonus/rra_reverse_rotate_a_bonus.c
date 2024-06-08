/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_reverse_rotate_a_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:24 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:53:16 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rra: reverse rotate a - shift down all elements of stack a b 1.
 * the last element becomes the first one. */
void	rra_reverse_rotate_a(t_stack *a, int flag)
{
	if (is_empty(a) || a->size == 1)
		return ;
	push_elem(a, new_elem(a->bottom->data));
	poop_elem(a);
	if (!flag)
		ft_putstr("rra\n");
}
