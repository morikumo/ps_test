#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack 
{
    int    nbr;
    struct s_stack  *next;
}           t_stack;

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_swap(long *a, long *b);
t_stack	*new_element(int nbr);


#endif