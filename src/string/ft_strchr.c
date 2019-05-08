/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfaria <zfaria@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:21:25 by zfaria            #+#    #+#             */
/*   Updated: 2019/05/08 10:21:25 by zfaria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char const *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char*)s);
	else
		return (0);
}
