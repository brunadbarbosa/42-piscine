/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:58:23 by brmaria-          #+#    #+#             */
/*   Updated: 2025/04/07 20:07:12 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter >= 'a' && letter <= 'z')
    {
        write (1, &letter, 1);
        letter++;
    }
}

/*int main(void)
{
    ft_print_alphabet();
    return (0);
}*/