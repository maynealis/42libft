/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:55:12 by cmayne-p          #+#    #+#             */
/*   Updated: 2025/03/02 12:58:01 by cmayne-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*	@brief Calculates the result of a base raised to the power of an exponent.
*	
*	@param base The base integer value to be raised to the power of `exp`.
*	@param exp The exponent value that the base will be raised to.
*			 Must be a non-negative integer.
*	@return The result of base raised to the power of exp.
*	@note This function does not handle negative exponents, and assumes exp >= 0
*/
int	ft_exp(int base, int exp)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}
