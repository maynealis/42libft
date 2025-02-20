/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 21:42:35 by cmayne-p          #+#    #+#             */
/*   Updated: 2024/12/20 21:44:51 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*	@brief Checks if a character is a whitespace character.
*	
*	@param c The character to check. Must have the value of an unsigned char 
*			 or EOF.
*	@return 1 if the character is a whitespace character; 0 otherwise.
*/
int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}
