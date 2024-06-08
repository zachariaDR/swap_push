/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_reverse_rotate_b_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:31 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:53:31 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rrb: reverse rotate b - shift down all elements of stack b by 1.
 * the last one becomes the first one. */
void	rrb_reverse_rotate_b(t_stack *b, int flag)
{
	if (is_empty(b) || b->size == 1)
		return ;
	push_elem(b, new_elem(b->bottom->data));
	poop_elem(b);
	if (!flag)
		ft_putstr("rrb\n");
}
