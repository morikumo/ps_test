#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/*------------------------- STRUCTURE DE MA LISTE ----------------------*/

typedef struct s_stack 
{
    long    nbr;
    struct s_stack  *next;
}           t_stack;

/*----------------------------------------------------------------------*/

/*---------------------- FONCTION UTILS DE LA LIBFT --------------------*/

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_swap(long *a, long *b);
int     len_list(t_stack *stack_a);
long	ft_atol(const char *str);

/*----------------------------------------------------------------------*/

/*---------------------- FONCTION UTILS DES ACTION ---------------------*/

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
t_stack     *swap_a_b(t_stack *stack_a_b);
t_stack     *rotate_a_b(t_stack *stack_a_b);
t_stack     *rrotate_a_b(t_stack *stack_a_b);

/*----------------------------------------------------------------------*/

/*----------------------------- FONCTION TRI ---------------------------*/

t_stack     *tri_for_2(t_stack *stack_a);
t_stack     *tri_for_3(t_stack *stack_a);
t_stack     *tri_for_5(t_stack *stack_a, t_stack *stack_b);
t_stack     *min_up_list(t_stack *stack_a);
t_stack     *max_up_list(t_stack *stack_a);
int	        min_pos(t_stack *stack_a);
int         max_pos(t_stack *stack_a);

/*----------------------------------------------------------------------*/

/*---------------------------- FONCTION ERREUR -------------------------*/

int     ft_isdigit(char s);
int     ft_white_space(char c);

/*----------------------------------------------------------------------*/

#endif