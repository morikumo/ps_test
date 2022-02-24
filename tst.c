#include "./test.h"

t_list  *ft_lstnew(void *content)
{
        t_list  *one;

        one = (t_list *)malloc (sizeof(*one));
        if (!one)
                return (NULL);
//        printf(one);
//        content = "2";
//        printf("%p\n",content);
//        one->content = content;
//        printf("%p\n",content);
        printf("L'adresse de la liste mallocer :%p\n",one);
        one->prix = 7;
        printf("Valeur de prix :%d\n",one->prix);
        one->price = 2;
        printf("Valeur de price :%d\n",one->price);
        one->next = NULL;
        printf("Dernier valeur :%p\n",one->next);
        return (one);
}

int     ft_lstsize(t_list *lst)
{
        int     len;

        len = 0;
        while (lst)
        {
                lst = lst->next;
                len++;
        }
        printf("Taille de la list :%d \n", len);
        return (len);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
        if (!del)
                return ;
        if (lst)
        {
        //        (*del)(lst->prix);
        //        printf("%d\n",lst->prix);
                printf("%p\n",lst->content);
                (*del)(lst->content);
                printf("%p\n",lst->content);
                free(lst);
        }
}

int main()
{
    t_list one;
    t_list *two;
    void *del;

    ft_lstnew(one.element);
    ft_lstsize(ft_lstnew(one.element));
    ft_lstdelone(two,del);
    return(0);
}