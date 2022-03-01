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

/**
 * @brief va 
 * 
 * @param stack_a 
 * @param stack_b 
 * @return t_stack* 
 */
t_stack *push_a(t_stack *stack_a, t_stack *stack_b)
{
    if(new_element())
}
