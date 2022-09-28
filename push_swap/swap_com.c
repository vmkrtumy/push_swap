void    sa(t_all *all, int flag)
{
    int temp;

    if(all->size_a < 2)
        return ;
    temp = all->stack_a->num;
    all->stack_a->num = all->stack_a->next->num;
    all->stack_a->next->num = temp;
    temp = all->stack_a->index;
    all->stack_a->index = all->stack_a->next->index;
    all->stack_a->next->index = temp;
    temp = all->stack_a->flag
    all->stack_a->flag = all->stack_a->next->flag;
    all->stack_a->next->flag = temp;

    if(flag)
        write(1, "sa\n", 3);
}

void    sb(t_all *all, int flag)
{
    int temp;

    if(all->size_b < 2)
        return ;
    temp = all->stack_b->num;
    all->stack_b->num = all->stack_b->next->num;
    all->stack_b->next->num = temp;
    temp = all->stack_b->index;
    all->stack_b->index = all->stack_b->next->index;
    all->stack_b->next->index = temp;
    temp = all->stack_a->flag
    all->stack_b->flag = all->stack_b->next->flag;
    all->stack_b->next->flag = temp;

    if(flag)
        write(1, "sb\n", 3);
}

void    ss(t_all *all, int flag)
{
    sa(all, 0);
    sb(all, 0);
    if(flag)
        write(1, "ss\n", 3);
}