#include "push_swap.h"

/**
 * @brief Va faire un swap et remplacer le 1er element en haut de la stack par le second.
 * 
 * @param stack_a 
 * @return t_stack* 
 */
t_stack *swap_a(t_stack *stack_a)
{
    if (stack_a->nbr && stack_a->next->nbr)
        ft_swap(&(stack_a->nbr), &(stack_a->next->nbr));
    ft_putstr("SA\n");
    return (stack_a);
}

