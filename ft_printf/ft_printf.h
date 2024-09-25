/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuevas- <lcuevas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:45:41 by lcuevas-          #+#    #+#             */
/*   Updated: 2023/11/22 12:58:16 by lcuevas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

/* las funciones que toque, del putchar a todo eso */
void	ft_putchar(char c, int *ret);
void	ft_string(char *str, int *ret);
void	ft_pointer(unsigned long long ptr, int *ret);
void	ft_decimal(int n, int *ret);
void	ft_unsigned(unsigned int nb, int *ret);
void	ft_hexa(unsigned long long nb, char c, int *ret);
int		ft_printf(char const *content, ...);

#endif
