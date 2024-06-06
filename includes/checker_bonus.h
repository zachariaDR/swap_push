/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:37:33 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/04 10:07:00 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

/* ---- Utils Functions ---- */
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char *s1, char c);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

#endif
