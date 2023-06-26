/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:23:01 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/26 20:03:10 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

size_t	ft_strlen(const char *str )
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		v;
	char	*newstr;

	i = 0;
	v = 0;
	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	while (s1 && s1[v])
		newstr[i++] = s1[v++];
	v = 0;
	while (s2 && s2[v])
	{
		newstr[i] = s2[v++];
		if (newstr[i++] == '\n')
			break ;
	}
	newstr[i] = '\0';
	free (s1);
	return (newstr);
}
