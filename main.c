/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymhabib <aymhabib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 13:09:06 by aymhabib          #+#    #+#             */
/*   Updated: 2019/05/11 02:16:17 by aymhabib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../get_next_line/libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
/*
int		main(int argc, char **argv)
{
	int fd;
	char *line;
	int ret; 
	int i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);

			while((ret = get_next_line(fd, &line)) == 1)
			{
					i++;
					printf("%d %s\n", ret, line);
					free(line);
			}
			close(fd);
       	}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int fd;
 	int fd2;
	char *line;
	int ret; 
	int i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				if (i < 1000)
				{
					i++;
					printf("MAIN:%d, line>%s\n", ret, line);
				}
			}
		close(fd);
			i = 0;
			fd2 = open(argv[2], O_RDONLY);
			while ((ret = get_next_line(fd2, &line)) == 1)
			{
				if (i < 2000)
				{
					i++;
					printf("MAIN:%d, line>%s\n", ret, line);
				}
			}
		close(fd2);
		}
	}
	return (1);
}
*/
int		main(int argc, char **argv)
{
	int fd;
 	int fd2;
	char *line;
	int ret;
	int i;

	if (argc >= 2)
	{
		i = 0;
		if (access(argv[1], F_OK) == 0)
		{
			fd = open(argv[1], O_RDONLY);
			fd2 = open(argv[2], O_RDONLY);
			char *line1;
			int ret2;
			ret = get_next_line(fd, &line);
			ret2 = get_next_line(fd2, &line1);
			while (ret || ret2)
			{
				printf("a(%d)>%s\n",ret, line);
				printf("b(%d)>%s\n",ret2, line1);
				ret = get_next_line(fd, &line);
				ret2 = get_next_line(fd2, &line1);
			}
			/*
			ret = get_next_line(fd, &line);
			if (ret == 1)
				printf("MAIN:%d, line1>%s\n", ret, line);
			ret = get_next_line(fd2, &line);
			if (ret == 1)
				printf("MAIN:%d, line1>%s\n", ret, line);
			ret = get_next_line(fd, &line);
			if (ret == 1)
				printf("MAIN:%d, line2>%s\n", ret, line);
			ret = get_next_line(fd2, &line);
			if (ret == 1)
				printf("MAIN:%d, line2>%s\n", ret, line);
			ret = get_next_line(fd, &line);
			if (ret == 1)
				printf("MAIN:%d, line3>%s\n", ret, line);
			ret = get_next_line(fd2, &line);
			if (ret == 1)
				printf("MAIN:%d, line3>%s\n", ret, line);
			ret = get_next_line(fd, &line);
			if (ret == 1)
				printf("MAIN:%d, line4>%s\n", ret, line);
			ret = get_next_line(fd2, &line);
			if (ret == 1)
				printf("MAIN:%d, line4>%s\n", ret, line);
			ret = get_next_line(fd, &line);
			if (ret == 1)
				printf("MAIN:%d, line5>%s\n", ret, line);
			ret = get_next_line(fd2, &line);
			*/
			close(fd);
			close(fd2);
		}
	}
	return (1);
}

