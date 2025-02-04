#include "push_swap.h"

void sort_2(t_stack **lst, char c)
{		
    if((*lst)->n > (*lst)->next->n)
	{
		if (c == 'a')
			sa(lst);
		if (c == 'b')
			sb(lst);
	}
}

void sort_3(t_stack **lst)
{
    t_stack *last = last_node(*lst);

    int test1 = (*lst)->n < (*lst)->next->n; 
    int test2 = (*lst)->next->n > last->n; 
    if(test1 && test2 && last->n > (*lst)->n) //1 3 2
    {
        rr_lst(lst);
        sa(lst);
    }
    else if(!test1 && ((*lst)->n < last->n)) //2 1 3
        sa(lst);
    else if(test1 && (*lst)->n > last->n) //2 3 1
        rr_lst(lst);
    else if(!test1 && (*lst)->n > last->n && !test2) //3 1 2
        ra(lst);
    else if(!test1 && test2)// 3 2 1 
    {
        sa(lst);
        rr_lst(lst);
    }
}

t_stack *get_min(t_stack *lst)
{
    int min;
    t_stack *save;
    
    while (lst)
    {
        min = lst->n;
        save = lst;
        while (lst)
        {
            if (min <= lst->n)
            {
                lst = lst->next;
                if(!lst)
                    return (save);
            }
            else
                break;
        }
    }
    return save;
}
t_stack *get_max(t_stack *lst)
{
    int max;
    t_stack *save;
    
    while (lst)
    {
        max = lst->n;
        save = lst;
        while (lst)
        {
            if (max >= lst->n)
            {
                lst = lst->next;
                if(!lst)
                    return (save);
            }
            else
                break;
        }
    }
    return save;
}
void push_min(t_stack **a, t_stack **b)
{
	t_stack *min;
	t_stack *tmp;
	int i;

	i = 0;
	tmp = *a;
    min = get_min(*a);
	while (tmp)
	{
		i++;
		if (tmp->n == min->n)
			break;
		tmp = tmp->next;
	}
	if (i == 1)
		pb(a, b);
	else if (i == 2)
	{
		sa(a);
		pb(a, b);
	}
	else if (i == 3)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else if (i == 4)
	{
		rr_lst(a);
		rr_lst(a);
		pb(a, b);
	}
	else if (i == 5)
	{
		rr_lst(a);
		pb(a, b);
	}
}

void sort_4(t_stack **a, t_stack **b)
{
	push_min(a, b);	
	sort_3(a);
	pa(a, b);
}
    
void sort_5(t_stack **a,t_stack **b)
{
	if (lst_len(*a) == 5)
	{
		push_min(a, b);
		sort_4(a, b);
		pa(a, b);
	}
}




















