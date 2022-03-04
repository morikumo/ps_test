#include "./test.h"
/**
 * @brief Alloue (avec malloc(3)) et renvoie un nouvel
élément. La variable membre ’content’ est
initialisée à l’aide de la valeur du paramètre
’content’. La variable ’next’ est initialisée à
NULL.
 * 
 * @param content 
 * @return t_list* 
 */
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

/**
 * @brief Ajoute l’élément ’new’ au début de la liste.
 * 
 * @param lst 
 * @return int 
 */
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

/**
 * @brief Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(3). La
mémoire de ’next’ ne doit pas être free.
 * 
 * @param lst 
 * @param del 
 */
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

/**
 * @brief Ajoute l’élément ’new’ au début de la liste.
 * 
 * @param alst 
 * @param new 
 */
void    ft_lstadd_front(t_list **alst, t_list *new)
{
        t_list  *tmp;

        if (!alst)
                return ;

        if (*alst)
        {
                printf("Valeur de tmp 1 :%p\n",tmp);
                tmp = *alst;
                printf("Valeur de alst :%p\n", alst);
                *alst = new;
                printf("Valeur de new :%p\n", new);
                new->next = tmp;
                printf("Valeur de tmp 2 :%p\n",tmp);
        }
        else
        {
                *alst = new;
                printf("Else :%p\n",new);
        }
}

/**
 * @brief Renvoie le dernier élément de la liste.
 * 
 * @param lst 
 * @return t_list* 
 */
t_list  *ft_lstlast(t_list *lst)
{
        while (lst && lst->next != NULL)
        {
                lst = lst->next;
                printf("%p\n",lst);
        }
        return (lst);
}

/**
 * @brief Ajoute l’élément ’new’ à la fin de la liste.
 * 
 * @param alst 
 * @param new 
 */
void    ft_lstadd_back(t_list **alst, t_list *new)
{
        if (*alst)
        {
                ft_lstlast(*alst)->next = new;
                printf("If *alst alors new :%p\n",new);
        }
        else
        {
                printf("Sinon alst :%p\n",*alst);
                *alst = new;
                printf("Puis new :%p\n",new);
        }
}


int main()
{
    t_list one;
    t_list *two;
    t_list **three;
    void *del;

    ft_lstnew(one.element);
    //ft_lstdelone(two,del);
    //ft_lstadd_front(three,two);
    //ft_lstlast(two);
    //ft_lstadd_back(three, two);
    //ft_lstsize(two);
    return(0);
}