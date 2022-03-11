#include "push_swap.h"

/**
 * @brief Ici stock aura la valeur du plus grand nombre, on va mettre i a la position dans la liste pour identifier le nombre en question
 * Soit la plus grande valeur ici.
 * 
 * @param stack_a 
 * @return int 
 */
int max_pos(t_stack *stack_a)
{
    t_stack	*tmp;
	int		i;
	int		stock;

	tmp = stack_a;
	i = 1;
	stock = stack_a->nbr;
	while (stack_a)
	{
		if (stack_a->nbr > stock)
		{
			stock = stack_a->nbr;
		}
		stack_a = stack_a->next;
	}
	while (tmp->nbr != stock)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/**
 * @brief Regardfe la taille de la liste, cherche le plus grand element
 * Si il n'y a que 2 element et que l'element le plus grand se trouve ne haut de la pile alors on swap
 * Sinon on fait rrotate jusqu(a arrivé a l'element le plus grand
 * 
 * @param pile_a 
 * @return t_pile* 
 */
t_stack max_up_list(t_stack *stack_a)
{}



// manque posmin et min top