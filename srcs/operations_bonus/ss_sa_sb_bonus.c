/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_sa_sb_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:59 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:54:59 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* ss: swap a and swap b at the same time. */
void	ss_sa_sb(t_stack *a, t_stack *b, int flag)
{
	if (a->size <= 1 || b->size <= 1)
		return ;
	sa_swap_a(a, true);
	sb_swap_b(b, true);
	if (!flag)
		ft_putstr("ss\n");
}
