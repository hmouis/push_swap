#include "push_swap.h"

void push_to_lst(t_stack **lst,int n)
{
    t_stack *node;
    node = creat_node(n);
    add_back(lst, node);
}

int check_number(t_stack *lst,int n)
{
    while (lst)
    {
        if (n == lst->n)
            return (1);
        lst = lst->next;
    }
    return (0);
}

