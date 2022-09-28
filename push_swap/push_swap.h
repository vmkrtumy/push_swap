#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_node
{
	int				num;
	int				index;
	int				flag;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_all
{
	t_node			*stack_a;
	t_node			*stack_b;
	int				size_a;
	int				size_b;
	int				min;
	int				med;
	int				max;
	int				min_a;
}					t_all;

char *put_space(char **nums);
int *make_array(char **nums);
int *sort_array(int *array);
int *result_array(int *res_array, int *sorted);
void    ra(t_all *all, int flag);
void    rb(t_all *all, int flag);
void    rr(t_all *all, int flag);
void    rra(t_all *all, int flag);
void    rrb(t_all *all, int flag);
void    rrr(t_all *all, int flag);
void    sa(t_all *all, int flag);
void    sb(t_all *all, int flag);
void    ss(t_all *all, int flag);
void    pa(t_all *all, int flag);
void    pb(t_all *all, int flag);
void    error_massage(void);

#endif