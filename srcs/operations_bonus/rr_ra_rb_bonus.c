/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:26 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/07 23:52:26 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rr: rotate a and rotate b at the same time. */
void	rr_ra_rb(t_stack *a, t_stack *b, int flag)
{
	if (a->size <= 1 || b->size <= 1)
		return ;
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	if (!flag)
		ft_putstr("rr\n");
}
