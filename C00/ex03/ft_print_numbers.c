/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:16:07 by brmaria-          #+#    #+#             */
/*   Updated: 2025/04/07 20:19:46 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        write (1, &number, 1);
        number++;
    }
        
}

/*int main(void)
{
    ft_print_numbers();
    return (0);
}*/