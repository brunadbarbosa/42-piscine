/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:38:43 by brmaria-          #+#    #+#             */
/*   Updated: 2025/04/07 20:49:40 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write (1, &a, 1);
                write (1, &b, 1);
                write (1, &c, 1);
                if (a != '7')
                    write (1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

/*int main(void)
{
    ft_print_comb();
    return (0);
}*/