#include "push_swap.h"

void sa(t_stack **a)
{
    t_stack *second;

    if(!a || !*a || !(*a)->next)
        return ;
    second = (*a)->next;
    (*a)->next = second->next;
    second->next = (*a);
    (*a) = second;
	ft_putstr("sa");
}

void sb(t_stack **b)
{
    t_stack *second;

    if(!b || !*b || !(*b)->next)
        return ;
    second = (*b)->next;
    (*b)->next = second->next;
    second->next = (*b);
    (*b) = second;
	ft_putstr("sb");
}

void ss(t_stack **a, t_stack **b)
{

    t_stack *second;
	int i = 0;

    //for stack a
    if(!a || !*a || !(*a)->next || !b || !*b || !(*b)->next)
        return ;
    second = (*a)->next;
    (*a)->next = second->next;
    second->next = (*a);
    (*a) = second;
    //for stack b
    second = (*b)->next;
    (*b)->next = second->next;
    second->next = (*b);
    (*b) = second;
	ft_putstr("rr");
}
void pb(t_stack **a, t_stack **b)
{
    if (!a || !*a || !b)
        return ;
    add_front(a, b);
	write(1, "pb\n", 3);
}

void pa(t_stack **a, t_stack **b)
{
    if (!b || !*b || !a)
        return ;
    add_front(b, a);
	write(1, "pa\n", 3);
}

void ra(t_stack **a)
{
    t_stack *first;

    if(!a || !*a)
        return;
    first = *a;
    *a = (*a)->next;
    add_back(a, first);
    first->next = NULL;
	ft_putstr("ra");
}

void rb(t_stack **b)
{
    t_stack *first;

    if(!b || !*b)
        return;
    first = *b;
    *b = (*b)->next;
    add_back(b, first);
    first->next = NULL;
	ft_putstr("rb");
}

void rr(t_stack **a, t_stack **b)
{ 
	t_stack *first;

    if(!a || !*a || !b || !*b)
        return;
    first = *a;
    *a = (*a)->next;
    add_back(a, first);
    first->next = NULL;

    first = *b;
    *b = (*b)->next;
    add_back(b, first);
    first->next = NULL;
	ft_putstr("rr");
}

void rr_lst(t_stack **lst)
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
	ft_putstr("rrab");
}

