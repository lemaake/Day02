/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:13:01 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/10 12:28:45 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
	char omega;
	char alpha;

	char omega ='a';
	char alpha ='z';

	while(alpha <= omega)
	{
		ft_putchar(omega);
		omega++;
	}
