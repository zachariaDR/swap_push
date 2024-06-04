/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:05:15 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/04 00:31:44 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
   // for open


char	*str_init(int fd)
{
	char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = malloc((size_t)BUFFER_SIZE + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*read_line(int fd, ssize_t *bytes_read, char *buffer, char *part)
{
	ssize_t	rd;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(buffer);
		return (NULL);
	}
	rd = read(fd, part, BUFFER_SIZE);
	if (rd < 0)
	{
		free(part);
		free(buffer);
		return (0);
	}
	part[rd] = '\0';
	*bytes_read = rd;
	buffer = ft_strjoin(buffer, part);
	return (buffer);
}

char	*make_clean(char *buffer)
{
	int	i;

	if (!buffer)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	return (ft_substr(buffer, 0, i));
}

char	*start_newline(char *buffer)
{
	char	*rest;
	int		len;
	int		i;

	if (!*buffer)
	{
		free(buffer);
		return (NULL);
	}
	i = 0;
	while (*(buffer + i) && *(buffer + i) != '\n')
		i++;
	if (*(buffer + i) == '\n')
		i++;
	len = ft_strlen(buffer + i) + 1;
	if (len == 1)
	{
		free(buffer);
		return (NULL);
	}
	rest = (char *)malloc(sizeof(char) * len);
	ft_strlcpy(rest, buffer + i, len);
	free(buffer);
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*part;
	char		*clean_line;
	static char	*buffer;
	ssize_t		bytes_read;

	part = str_init(fd);
	if (!part)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(part, '\n'))
	{
		buffer = read_line(fd, &bytes_read, buffer, part);
		if (!buffer)
			return (NULL);
	}
	clean_line = make_clean(buffer);
	buffer = start_newline(buffer);
	free(part);
	return (clean_line);
}


