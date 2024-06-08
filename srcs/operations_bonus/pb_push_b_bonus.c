/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:17:55 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/04 10:04:57 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* pb: push b - take the first element of top of a and put it at the top of b.
 * (do nothing if a emepty). */
void	pb_push_b(t_stack *a, t_stack *b, int flag)
{
	if (is_empty(a))
		return ;
	push_elem(b, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("pb\n");
}
