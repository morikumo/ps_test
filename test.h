#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
    void            *content;
    void            *element;
    int             prix;
    int             price;
    struct s_list      *next;
} t_list;

int     ft_lstsize(t_list *lst);
t_list *ft_lstnew(void *content);
void    ft_lstdelone(t_list *lst, void (*del)(void *));

#endif