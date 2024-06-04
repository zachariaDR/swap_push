/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_push_a_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:17:43 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/04 10:04:28 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* pa: push a - take the first element at the top of b and put it at top of a.
 * (do nothing if b is empty). */

void	pa_push_a(t_stack *a, t_stack *b, int flag)
{
	if (is_empty(b))
		return ;
	push_elem(a, new_elem(b->top->data));
	pop_elem(b);
	if (!flag)
		ft_putstr("pa\n");
}
