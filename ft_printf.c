/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skumar <skumar@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:44:49 by skumar            #+#    #+#             */
/*   Updated: 2024/10/19 17:30:30 by skumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	char_len;

	char_len = 0;

	va_start (ap, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += output_cases(format, ap);
		}
		else
			len += write(STDOUT_FILENO, &(*format), 1);
		format++;
	}
	va_end(ap);
	return (char_len);
}
