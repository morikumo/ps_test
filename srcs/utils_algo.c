#include "push_swap.h"

/**
 * @brief Va créer un tableau de int avec malloc et metre dans le tableeau le nombre d'element de la liste.
 * 
 * @param stack_a 
 * @param size 
 * @return int* 
 */
int	*tab_int(t_stack *stack_a, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size + 1);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = stack_a->nbr;
		i++;
		stack_a = stack_a->next;
	}
	return (tab);
}