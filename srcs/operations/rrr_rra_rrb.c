/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:27 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/30 19:02:04 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_rra_rrb(t_stack *a, t_stack *b)
{
	rra_reverse_rotate_a(a, true);
	rrb_reverse_rotate_b(b, true);
}
