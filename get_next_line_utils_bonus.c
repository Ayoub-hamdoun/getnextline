/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:41:40 by ayhamdou          #+#    #+#             */
/*   Updated: 2024/01/21 15:46:32 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size1;
	int		size2;
	char	*str;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		str[i] = s2[i - size1];
		i++;
	}
	str[i] = '\0';
	return (free((void *)s1), str);
}

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		s;
	char	*str;

	i = 0;
	s = ft_strlen(s1) + 1;
	str = (char *) malloc(s * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_error(char *str)
{
	if (str)
		free(str);
	return (NULL);
}
