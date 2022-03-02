#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/*------------------------- STRUCTURE DE MA LISTE ----------------------*/

typedef struct s_stack 
{
    int    nbr;
    struct s_stack  *next;
}           t_stack;

/*----------------------------------------------------------------------*/

/*------------------------- FONCTION UTILS DE LA LIBFT -----------------------*/

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_swap(long *a, long *b);
int     len_list(t_stack *stack_a);

/*----------------------------------------------------------------------*/

/*--------------------------- FONCTION UTILS DES ACTION --------------------------*/

t_stack     *new_element(int nbr);
t_stack     *ft_stack_front(t_stack *start, int data);
t_stack     *ft_stack_back(t_stack *stack_a, int nbr);
t_stack	    *del_nbr_head(t_stack *stack_a);
t_stack	    *ft_lstlast(t_stack *lst);

/*----------------------------------------------------------------------*/

/*--------------------------- FONCTION ACTION --------------------------*/

t_stack     *swap_a(t_stack *stack_a);
t_stack     *push_a(t_stack *stack_a, t_stack *stack_b);
t_stack     *rotate_a(t_stack *stack_a);
t_stack     *rrotate_a(t_stack *stack_a);
t_stack     *swap_b(t_stack *stack_b);
t_stack     *push_b(t_stack *stack_b, t_stack *stack_a);
t_stack     *rotate_b(t_stack *stack_b);
t_stack     *rrotate_b(t_stack *stack_b);

/*----------------------------------------------------------------------*/

#endif