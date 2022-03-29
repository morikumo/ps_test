/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:05:52 by mabid             #+#    #+#             */
/*   Updated: 2022/03/29 18:45:42 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*free_stack(t_stack *stack_a)
{
	t_stack	*nbr;

	while (stack_a)
	{
		nbr = stack_a;
		stack_a = stack_a->next;
		free(nbr);
	}
	return (stack_a);
}

t_stack	*ft_stack_back2(t_stack *stack_a, t_stack *element)
{
	t_stack	*list;

	list = stack_a;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = element;
	}
	return (list);
}

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			i;
 	int			j;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	i = 1;
 	while (av[i] && ft_atol(av[i]))
    {
		j = i + 1;
		while(av[j])
		{
			if(ft_atol(av[i]) == ft_atol(av[j]))
			{
				free_stack(stack_a);
				return(0);
			}
			j++;
		}
		if(stack_a == NULL)
			stack_a = new_element(ft_atol(av[1]));
		ft_stack_back2(stack_a, new_element(ft_atol(av[i])));
        i++;
    }
	ft_tri(i, stack_a, stack_b);
	free_stack(stack_a);
	return (0);
}
