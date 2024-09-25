/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:01:31 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/25 14:52:55 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	char	*last;

	while (*s)
	{
		if (*s == c)
			last = (char *) s;
		s++;
	}
	if (c == 0)
		return ((char *) s);
	else
		return (last);
	return ("\0");
}
