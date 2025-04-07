/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:08:00 by brmaria-          #+#    #+#             */
/*   Updated: 2025/04/07 20:15:07 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = 'z';
    while (letter <= 'z'&& letter >= 'a')
    {
        write (1, &letter, 1);
        letter--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}