/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmaria- <brmaria-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:53:16 by brmaria-          #+#    #+#             */
/*   Updated: 2025/04/07 19:56:58 by brmaria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


/*int main(int argc, char **argv)
{
    if (argc != 2)
        return (-1);
    ft_putchar(*argv[1]);
    return (0);
}*/
