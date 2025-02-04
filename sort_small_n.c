#include "push_swap.h"

void sort_2(t_stack **lst,char *move)
{
    if((*lst)->n > (*lst)->next->n)
        swap(lst, move);
}

void sort_3(t_stack **lst,char *move)
{
    t_stack *last = last_node(*lst);

    int test1 = (*lst)->n < (*lst)->next->n; 
    int test2 = (*lst)->next->n > last->n; 
    if(test1 && test2 && last->n > (*lst)->n) //1 3 2
    {
        rr_lst(lst, move);
        swap(lst, move);
    }
    else if(!test1 && ((*lst)->n < last->n)) //2 1 3
        swap(lst, move);
    else if(test1 && (*lst)->n > last->n) //2 3 1
        rr_lst(lst, move);
    else if(!test1 && (*lst)->n > last->n && !test2) //3 1 2
        rotate_lst(lst, move);
    else if(!test1 && test2)// 3 2 1 
    {
        swap(lst, move);
        rr_lst(lst, move);
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
		push_b(a, b);
	else if (i == 2)
	{
		swap(a, "sa");
		push_b(a, b);
	}
	else if (i == 3)
	{
		rotate_lst(a, "ra");
		rotate_lst(a, "ra");
		push_b(a, b);
	}
	else if (i == 4)
	{
		rr_lst(a , "rra");
		rr_lst(a , "rra");
		push_b(a, b);
	}
	else if (i == 5)
	{
		rr_lst(a, "rra");
		push_b(a, b);
	}
}

void sort_4(t_stack **a, t_stack **b, char *move)
{
	push_min(a, b);	
	sort_3(a, move);
	push_a(a, b);
}
    
void sort_5(t_stack **a,t_stack **b, char *move)
{
	if (lst_len(*a) == 5)
	{
		push_min(a, b);
		sort_4(a, b, move);
		push_a(a, b);
	}
}




















