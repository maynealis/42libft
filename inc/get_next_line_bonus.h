/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:26:12 by cmayne-p          #+#    #+#             */
/*   Updated: 2025/03/08 15:25:51 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>  // read
# include <stdlib.h>  // malloc and free
# include <stddef.h> // size_t
# include <stdio.h> // for FOPEN_MAX

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# define FT_MAX_OPEN_FILES 1024

size_t	gnl_strlen(char *s);
char	*gnl_strdup(char *s);
char	*gnl_substr(char *s, size_t ini, size_t end);
char	*gnl_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
