/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_reverse_rotate_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:09 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 19:01:57 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb_reverse_rotate_b(t_stack *b, int flag)
{
	push_elem(b, new_elem(b->bottom->data));
	poop_elem(b);
	if (!flag)
		ft_putstr("rrb\n");
}
