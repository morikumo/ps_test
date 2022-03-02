#include "push_swap.h"
/**
 * @brief Je dois vraiment faire une description de cette fonction ?
 * 
 * @param c 
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * @brief Le bon vieux putstr, j'aurai tout de meme preferer printf
 * 
 * @param s 
 */
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
/**
 * @brief Un simple swap
 * 
 * @param a 
 * @param b 
 */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * @brief Nous donne la taille de la liste. Equivalent de lstsize.
 * 
 * @param stack_a 
 * @return int 
 */
int	len_list(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}