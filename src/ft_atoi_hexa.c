/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:42:05 by cmayne-p          #+#    #+#             */
/*   Updated: 2025/03/15 15:42:12 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a hexadecimal string to an integer.
 *
 * This function takes a string representing a hexadecimal number
 * (with or without a "0x" or "0X" prefix) and converts it to an integer.
 *
 * @param nstr The string containing the hexadecimal number.
 *
 * @return The converted integer value. If `nstr` is NULL or empty,
 *         the function returns 0.
 *
 * @note The function skips leading whitespace characters and
 *       handles both uppercase and lowercase hex digits.
 *
 * @warning The function does not handle invalid characters gracefully;
 *          if an invalid character is found, the conversion stops.
 */
int	ft_atoi_hexa(char *nstr)
{
	int		result;
	char	*base;
	char	*ptr;

	base = ft_strdup("0123456789abcdef");
	result = 0;
	if (!nstr || *nstr == '\0')
		return (0);
	while (ft_isspace(*nstr))
		nstr++;
	if (nstr[0] == '0' && (nstr[1] == 'x' || nstr[1] == 'X'))
		nstr += 2;
	while (*nstr)
	{
		ptr = ft_strchr(base, ft_tolower(*nstr));
		if (!ptr)
			break ;
		result = (result * 16) + (ptr - base);
		nstr++;
	}
	free(base);
	return (result);
}
