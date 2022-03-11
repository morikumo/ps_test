#include "push_swap.h"

/**
 * @brief Cas manuel pour le cas ou il y a 2 elements dans la stack. Si le 1er element est plus grand que le second on swap sinon on retourne directement stack_a.
 * 
 * @param stack_a 
 * @return t_stack* 
 */
t_stack *tri_for_2(t_stack *stack_a)
{
    if (stack_a->nbr > stack_a->next->nbr)
        stack_a = swap_a(stack_a);
    return (stack_a);
}

/**
 * @brief Tri manuel pour 3 elements. Si le 1er elements est plus grand que le second, et que le 3eme elements est plus grand que le 1er, on fait un swap des 2 premiers elements.
 * Si le 1er elements est plus grand que le second et que le second element est plus grand que le 3eme.
 * On fait un swap des 2 premier elements et on fait un reverse rotate, soit le dernier element devient le premier.
 * 
 * @param stack_a 
 * @return t_stack* 
 */
t_stack *tri_for_3(t_stack *stack_a)
{
    if (stack_a->nbr > stack_a->next->nbr
        && stack_a->next->next->nbr > stack_a->nbr)
    {
        stack_a = swap_a(stack_a);
        return (stack_a);
    }
    else if (stack_a->nbr > stack_a->next->nbr
        && stack_a->next->nbr > stack_a->next->next->nbr)
    {
        stack_a = swap_a(stack_a);
        stack_a = rrotate_a(stack_a);
        return (stack_a);
    }
    return (stack_a);
}

t_stack tri_for_5(t_stack *stack_a, t_stack *stack_b)
{
    
}
