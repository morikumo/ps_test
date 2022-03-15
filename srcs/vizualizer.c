#include "push_swap.h"

#define VISUALISE 0

void	aff_list_a(t_stack *la)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = 0;
	write(1, "|", 1);
	if (la != NULL)
		tmp = size_nb(la->nbr);
	while (i++ < 7 - (tmp / 2))
		write(1, " ", 1);
	tmp = 0;
	if (la != NULL)
	{
		ft_putnbr_fd(la->nbr, 1);
		tmp = size_nb(la->nbr);
	}
	i = 0;
	while (i++ < 7 - (tmp / 2) + !(tmp % 2))
		write(1, " ", 1);
}

void	aff_list_b(t_stack *la)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = 0;
	write(1, "|", 1);
	if (la != NULL)
		tmp = size_nb(la->nbr);
	while (i++ < 7 - (tmp / 2))
		write(1, " ", 1);
	tmp = 0;
	if (la != NULL)
	{
		ft_putnbr_fd(la->nbr, 1);
		tmp = size_nb(la->nbr);
	}
	i = 0;
	while (i++ < 7 - (tmp / 2) + !(tmp % 2))
		write(1, " ", 1);
	write(1, "|", 1);
}

void	visualise_list(t_stack *la, t_stack *lb)
{
	int	max;
	int	i;

	if (VISUALISE == 0)
		return ;
	i = 0;
	max = ft_lstsize(la);
	if (ft_lstsize(lb) > ft_lstsize(la))
		max = ft_lstsize(lb);
	ft_putstr_fd("_________________________________\n", 1);
	ft_putstr_fd("|       a       |       b       |\n", 1);
	ft_putstr_fd("|---------------|---------------|\n", 1);
	while (i < max)
	{
		aff_list_a(la);
		aff_list_b(lb);
		write(1, "\n", 1);
		i++;
		if (la)
			la = la->next;
		if (lb)
			lb = lb->next;
	}
	ft_putstr_fd("|_______________|_______________|\n", 1);
}