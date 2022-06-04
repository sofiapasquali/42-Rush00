/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:42:52 by shahn             #+#    #+#             */
/*   Updated: 2022/02/07 03:41:22 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	condicoes(int x, int y, int xn, int yn);

void	mensagem(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "(Caracteres serão lidos na escala hexadecimal)\n", 48);
		write(1, "Use um valor positivo para que o retorno seja visível\n", 55);
	}
}

void	rush(int x, int y)
{
	int		xn;
	int		yn;

	mensagem(x, y);
	yn = 1;
	if (x >= 1 && y >= 1)
	{
		while (yn <= y)
		{
			xn = 1;
			while (xn <= x)
			{
				condicoes(x, y, xn, yn);
				xn ++;
			}
			yn ++;
			ft_putchar('\n');
		}
	}
}

void	condicoes(int x, int y, int xn, int yn)
{
	if ((xn == 1 && yn == 1) || (xn == x && yn == y))
		ft_putchar('/');
	else if ((xn == 1 && yn == y) || (xn == x && yn == 1))
		ft_putchar('\\');
	else if ((xn > 1 && xn < x) && (yn > 1 && yn < y))
		ft_putchar(' ');
	else
		ft_putchar('*');
}
