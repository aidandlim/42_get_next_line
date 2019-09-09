/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlim <dlim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 00:29:19 by dlim              #+#    #+#             */
/*   Updated: 2019/05/16 14:47:56 by dlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	result = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	while (*(s1 + j) != '\0')
	{
		*(result + i++) = *(s1 + j);
		j++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(result + i++) = *(s2 + j);
		j++;
	}
	*(result + i) = '\0';
	return (result);
}
