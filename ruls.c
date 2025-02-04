#include "push_swap.h"

void swap(t_stack **lst, char *move)
{
    t_stack *second;
	int i = 0;

    if(!lst || !*lst || !(*lst)->next)
        return ;
    second = (*lst)->next;
    (*lst)->next = second->next;
    second->next = (*lst);
    (*lst) = second;
	while (move[i])
	{
		write(1,&move[i] , 1);
		i++;
	}
	write(1, "\n", 1);
}

void push_b(t_stack **a, t_stack **b)
{
    if (!a || !*a || !b)
        return ;
    add_front(a, b);
	write(1, "pb\n", 3);
}

void push_a(t_stack **a, t_stack **b)
{
    if (!b || !*b || !a)
        return ;
    add_front(b, a);
	write(1, "pa\n", 3);
}

void rotate_lst(t_stack **lst, char *move)
{
    t_stack *first;
	int i = 0;

    if(!lst || !*lst)
        return;

    first = *lst;
    *lst = (*lst)->next;
    add_back(lst, first);
    first->next = NULL;
	while (move[i])
	{
		write(1,&move[i] , 1);
		i++;
	}	
	write(1, "\n", 1);
}

void rr_lst(t_stack **lst, char *move)
{
    t_stack *last;
    t_stack *first;
    t_stack *save;
	int i = 0;

    if (!lst || !*lst)
        return ;
    last = last_node(*lst);
    first = *lst;
    while(*lst)
    {
        save = *lst;
        *lst = (*lst)->next;
        if (!(*lst)->next)
            break;
    }
    save->next = NULL;
    (*lst) = last;
    (*lst)->next = first;
	while (move[i])
	{
		write(1,&move[i] , 1);
		i++;
	}	
	write(1, "\n", 1);
}

