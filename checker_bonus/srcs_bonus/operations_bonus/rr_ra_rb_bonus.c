/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:26 by ael-khni          #+#    #+#             */
/*   Updated: 2024/06/04 10:06:20 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rr: rotate a and rotate b at the same time. */
void	rr_ra_rb(t_stack *a, t_stack *b, int flag)
{
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	if (!flag)
		ft_putstr("rr\n");
}
