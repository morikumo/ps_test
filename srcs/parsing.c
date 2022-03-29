/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:03:36 by mabid             #+#    #+#             */
/*   Updated: 2022/03/29 18:39:17 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Prend les argument entre ce que l'on a mis en parametre dans split et 
 * les mets dans la liste ainsi que dasn le tableau.
 * 
 * @param av 
 * @return t_stack* 
 */
t_stack	*new_element_tab(char *av)
{
	t_stack	*tmp;
	t_stack	*stack_a;
	int		j;

	stack_a = NULL;
	j = 1;
	while (av[j])
	{
		check_str(av);
		if (!stack_a)
		{
			stack_a = new_element(ft_atol(av));
			tmp = stack_a;
		}
		else
		{
			tmp->next = new_element(ft_atol(av));
			tmp = tmp->next;
		}
		j++;
	}
	//free_str(av);
	return (stack_a);
}

/**
 * @brief Va vérifier si les paprametres sont bons pour procédés au programme.
 * 
 * @param av 
 * @return t_stack* 
 */

t_stack	*init(char *av)
{
	t_stack	*stack_a;

	stack_a = new_element_tab(av);
	if (stack_a)
	{
		if (check_next(stack_a) == 1)
		{
			ft_putstr("Error only 1 av\n");
			exit(1);
		}
		check_doublon(stack_a);
	}
	return (stack_a);
}
