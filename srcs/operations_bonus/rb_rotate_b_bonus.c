/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate_b_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:12 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:53:06 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rb_rotate_b(t_stack *b, int flag)
{
	if (is_empty(b) || b->size == 1)
		return ;
	push_elem_bottom(b, new_elem(b->top->data));
	pop_elem(b);
	if (!flag)
		ft_putstr("rb\n");
}
