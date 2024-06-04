/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:36 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/04 10:06:05 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rrr: reverse rotate a and reverse rotate b at the same time */
void	rrr_rra_rrb(t_stack *a, t_stack *b, int flag)
{
	rra_reverse_rotate_a(a, true);
	rrb_reverse_rotate_b(b, true);
	if (!flag)
		ft_putstr("rrr\n");
}
