#include "push_swap.h"

void sort(t_stack **a, t_stack **b, int len)
{
	t_stack *tmp;
	t_stack *min = get_min(*b);
	t_stack *max = get_max(*b);
	int i = 0;
	t_stack *save_head = *b;
	if (len == 3)
	{
		sort_3(a);
		return ;
	}
	else if (len == 4)
	{
		sort_4(a, b);
		return ;
	}
	else if (len == 5)
	{
		sort_5(a, b);
		return ;
	}
	sort_2(b, 'b');
	pb(a, b);
	pb(a, b);
	len = lst_len(*a); 
	while (i < len)
	{
		if (len == 3)
		{
			sort_3(a);
			break;
		}
		if (len == 
		tmp = save_head;
		if ((*a)->n > max->n)
		{
			pb(a, b);
			max = *a;
			return ;
		}
		else if ((*a)->n < min->n)
		{
			pa(a, b);
			rb(b);
			min = *a;
			return ;
		}
		else
		{
			
		}
		len = *a;
	i++;
	}









}

