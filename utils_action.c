#include "push_swap.h"

/**
 * @brief Va creer un nouveau element a la liste
 * 
 * @param nbr 
 * @return t_stack* 
 */
t_stack	*new_element(int nbr)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
    if (!element)
        return (NULL);
	element->nbr = nbr;
	element->next = NULL;
	return (element);
}

/**
 * @brief Va creer un element et le donner à push faire un echange
 * 
 * @param start 
 * @param data 
 * @return t_stack* 
 */
t_stack	*ft_stack_push_front(t_stack *start, int data)
{
	t_stack	*push;

	if (start)
	{
		push = new_element(data);
		push->next = start;
		start = push;
	}
	return (push);
}


