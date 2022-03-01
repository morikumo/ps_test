#include "push_swap.h"

/**
 * @brief Va creer un nouveau element a la liste
 * 
 * @param nbr 
 * @return t_pile* 
 */
t_stack	*new_element(int nbr)
{
	t_pile	*element;

	element = malloc(sizeof(t_pile));
    if (!element)
        return (NULL);
	element->nbr = nbr;
	element->next = NULL;
	return (element);
}



