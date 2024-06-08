/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:02 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:49:08 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra_rotate_a(t_stack *a, int flag)
{
	if (is_empty(a) || a->size == 1)
		return ;
	push_elem_bottom(a, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("ra\n");
}
