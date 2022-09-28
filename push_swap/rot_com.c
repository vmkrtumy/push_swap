void    ra(t_all *all, int flag)
{
    t_all temp;

    if(all->size_a < 2)
    return ;
    temp = all->stack_a;
    all->stack_a = all->stack_a->next;
    all->stack_a->prev->next = temp;
    if(flag)
        write(1, "ra\n", 3);
}

void    rb(t_all *all, int flag)
{
    t_all temp;
    
    if(all->size_b < 2)
    return ;
    temp = all->stack_b;
    all->stack_b = all->stack_b->next;
    all->stack_b->prev->next = temp;
    if(flag)
        write(1, "rb\n", 3);
}

void    rr(t_all *all, int flag)
{
    ra(all, 0);
    rb(all, 0);

    if(flag)
        write(1, "rr\n", 3);
}

void    rra(t_all *all, int flag)
{
    int temp;

    if(all->size_a < 2)
    return ;
}

void    rrb(t_all *all, int flag)
{
    int temp;

    if(all->size_a < 2)
    return ;
}

void    rrr(t_all *all, int flag)
{
    rra(all, 0);
    rrb(all, 0);
    write (1, "rrr\n", 4);
}