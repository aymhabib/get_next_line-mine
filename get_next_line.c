/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymhabib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:59:06 by aymhabib          #+#    #+#             */
/*   Updated: 2019/05/11 02:23:36 by aymhabib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		count_line(char **str, int fd)
{
	int i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	int			i;
	int			j;
	static char	*str[4864];
	char		buffer[BUFF_SIZE + 1];
	char *tmp;

	if (fd < 0 || read(fd, buffer, 0) || !line)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	while ((j = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[j] = '\0';
		tmp = str[fd];
		str[fd] = ft_strjoin(str[fd], buffer);
		free(tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	i = count_line(str, fd);
	*line = ft_strsub(str[fd], 0, i);
	if (!j && !ft_strlen(str[fd]) && !i)
		return (0);
	tmp = str[fd];
	str[fd] = ft_strdup(str[fd] + i + 1);
	free(tmp);
	return (1);
}
