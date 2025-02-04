#include "push_swap.h"

long check_arg(char *str)
{
    int	i;

    i = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '\0')
        return (LONG_MAX);
    while (str[i])
    {
        if(str[i] == ' ' || (str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '+' || str[i] == '-')
            {
                i++;
                if(str[i] < '0' || str[i] > '9')
                    return (LONG_MAX);
            }
            i++;
        }
        else 
            return (LONG_MAX);
    }
    return (1);
}

long ft_atoi(char *str, int *i)
{
    long result = 0;
    int sign = 1;

    if(str[*i] == '-' || str[*i] == '+')
    {
        if (str[*i] == '-')
            sign = -1;
        (*i)++;
    }
    while (str[*i] >= '0' && str[*i] <= '9')
    {
        result = result * 10 + str[*i] - '0';
        if (result > 2147483648)
            break;
        (*i)++;
    }
    if (str[*i] == '-' || str[*i] == '+')
        return (LONG_MAX);
    if (sign == -1)
    {
        if (result > 2147483648)
            return (LONG_MAX);
    }
    else if (result > 2147483647)
        return (LONG_MAX);
    return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
