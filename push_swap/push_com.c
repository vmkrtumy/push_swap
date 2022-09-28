#include "push_swap.h"

void    pa(t_all *all, int flag)
{
    t_all   tempa;
    t_all   tempb;

    if(all->size_b < 1)
        return ;
    tempb = all->stack_b;
    tempb->next = NULL;
    all->stack_b = all->stack_b->next;
    tempa = all->stack_a;
    all->stack_a = tempb;
    tempb->next = tempa;
    if(flag)
        write(1, "pa\n", 3);
}

void    pb(t_all *all, int flag)
{
    t_all   tempa;
    t_all   tempb;

    if(all->size_a < 1)
        return ;
    tempa = all->stack_a;
    tempa->next = NULL;
    all->stack_a = all->stack_a->next;
    tempb = all->stack_b;
    all->stack_b = tempa;
    tempa->next = tempb;
    if(flag)
        write(1, "pb\n", 3);
}
