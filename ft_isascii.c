/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:30:33 by jquinde-          #+#    #+#             */
/*   Updated: 2024/09/16 14:45:30 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascci(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}