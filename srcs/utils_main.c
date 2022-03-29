#include "push_swap.h"

t_stack *ft_tri(int i, t_stack *stack_a, t_stack *stack_b)
{
    if (stack_a)
	{
		if (i == 2)
			stack_a = tri_for_2(stack_a);
		else if (i == 3)
			stack_a = tri_for_3(stack_a);
		else if (i == 5)
			stack_a = tri_for_5(stack_a, stack_b);
		else
			stack_a = push_by_group(stack_a, stack_b, i);
	}
    return(stack_a);
}
/*
void ft_rempli(char *av, t_stack *stack_a)
{

    if(stack_a == NULL)
			stack_a = new_element(ft_atol(av));
		ft_stack_back2(stack_a, new_element(ft_atol(av)));
}
*/