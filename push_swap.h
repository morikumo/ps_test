#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

--------------------------- STRUCTURE DE MA LISTE ------------------------

typedef struct s_stack 
{
    int    nbr;
    struct s_stack  *next;
}           t_stack;

--------------------------------------------------------------------------

--------------------------- FONCTION DE LA LIBFT -------------------------
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_swap(long *a, long *b);
int     len_list(t_stack *stack_a);
--------------------------------------------------------------------------

----------------------------- FONCTION ACTION ----------------------------

t_stack     *new_element(int nbr);
t_stack     *ft_stack_front(t_stack *start, int data);
t_stack     *rotate_a(t_stack *stack_a);

--------------------------------------------------------------------------

#endif