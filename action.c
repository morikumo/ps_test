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
 * @brief Va chercher dans la stack_b en haut, pour la placer de la stack_a en haut
 * 
 * @param stack_a 
 * @param stack_b 
 * @return t_stack* 
 */
t_stack *push_a(t_stack *stack_a, t_stack *stack_b)
{
    if (!stack_a)
        stack_a = new_element(stack_b->nbr);
    else
        stack_a = ft_stack_front(stack_a, stack_b->nbr);
    ft_putstr("PA\n");
    return (stack_a);
}

/**
 * @brief Dans une meme pile le chiffre du haut et deplacer en bas. Le chiffre suivant devient celui en tete. 
 * 
 * @param stack_a 
 * @return t_stack* 
 */
t_stack *rotate_a(t_stack *stack_a)
{
    int     stay;
    t_stack *nextnbr;

    if (len_list(stack_a) == 1)
        return (stack_a);
    stay = stack_a->nbr;
    nextnbr = stack_a->next;
    ft_stack_back(nextnbr , stay);
    stack_a = del_nbr_head(stack_a)
    ft_putstr("RA\n");
    return (nextnbr);
}

