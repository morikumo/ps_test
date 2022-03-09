#include "push_swap.h"

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
void	ft_swap(long *a, long *b)
{
	long	c;

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
/**
 * @brief Un atoi pour les long. Va nous permettre de prendre en compte les chiffre plus grand que INT_MAX et INT_MIN.
 * 
 * @param str 
 * @return long 
 */
long	ft_atol(const char *str)
{
	int		i;
	int		negatif;
	long	resultat;

	i = 0;
	negatif = 1;
	resultat = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif = negatif * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - 48;
		i++;
	}
	return (resultat * negatif);
}