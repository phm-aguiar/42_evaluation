/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:47:16 by egeraldo          #+#    #+#             */
/*   Updated: 2023/08/22 15:12:47 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*after_line(char *line)
{
	int		index;
	char	*backup;
	char	*new_line;

	if (line && ft_strchr(line, '\n'))
	{
		new_line = ft_strchr(line, '\n');
		index = ft_strlen(line) - ft_strlen(new_line) + 1;
		backup = ft_strdup(new_line + 1);
		line[index] = '\0';
		return (backup);
	}
	return (NULL);
}

static char	*get_line(char *backup, char *buffer, int fd)
{
	int		read_line;
	char	*temp;

	read_line = 1;
	temp = NULL;
	while (read_line != 0)
	{
		read_line = read(fd, buffer, BUFFER_SIZE);
		if (read_line == -1)
			return (NULL);
		else if (!read_line)
			return (backup);
		buffer[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (backup);
}

static char	*free_alloc(char *buffer, char *line)
{
	if (line == NULL || *line == '\0')
	{
		free(line);
		line = NULL;
	}
	free(buffer);
	buffer = NULL;
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*backup[2048];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	line = get_line(backup[fd], buffer, fd);
	if (line == NULL && backup[fd])
		free(backup[fd]);
	backup[fd] = after_line(line);
	return (free_alloc(buffer, line));
}
