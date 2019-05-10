/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymhabib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:59:47 by aymhabib          #+#    #+#             */
/*   Updated: 2019/05/09 18:01:33 by aymhabib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 10

int	get_next_line(const int fd, char **line);

#endif
