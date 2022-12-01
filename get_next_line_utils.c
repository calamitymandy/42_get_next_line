/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:23:44 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/12/01 20:08:22 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] ==  (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL)
}

char	*ft_strjoin(char *first_str, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!first_str)
	{
		first_str = (char *)malloc(1 * sizeof(char));
		first_str = '\0';
	}
	if (!first_str || !buf)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(first_str) + ft_strlen(buff)) +1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (first_str)
		while (first_str[++i] != '\0')
			str[i] = first_str[i];
	while (buf[j] != '\0')
		str[i++] = buf[j++];
	str[ft_strlen(first_str) + ft_strlen(buf)] = '\0';
	free(first_str);
	return (str);
}

