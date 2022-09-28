#include <stdlib.h>
#include <stdio.h>

//ft_split
//ft_atoi

char *put_space(char **nums)
{
    char             *ret;
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;

    i = 1;
    if(nums == '\0')
        return NULL;
    while (nums[i] != '\0')
    {
        j = 0;
        while(nums[i][j] != '\0')
        {
            if(nums[i][j] >= '0' && nums[i][j] <= '9')
                ret[k] = nums[i][j];
            else
                ret[k] = ' ';
            k++;
            j++;
        }
        i++;
    }
    ret[k] = '\0';
    return (ret);
}

int *make_array(char **nums, )
{
    char    **split_nums;
    char    *space_nums;
    int     *res_arr;
    int     i;

    space_nums = put_space(nums);
    split_nums = ft_split(space_nums);
    i = 0;
    while (split_nums[i] != '\0')
    {
        res_arr = ft_atoi(split_nums[i])
        i++;
    }
    res_arr[i] = '\0';
    return (res_array);
}

int *sort_array(int *array)
{
    int *sorted = array;
    int i;
    int temp;

    i = 0;
    while (sorted[i] != '\0')
    {
        if (sorted[i] > sorted[i + 1])
        {
            temp = sorted[i];
            sorted[i] = sorted[i + 1];
            sorted[i + 1] = temp;
            i++;
        }
        i = 0;
    }
    return (sorted);
}

int *result_array(int *res_array, int *sorted)
{
    int *index_arr;
    int i;
    int j;

    i = 0;
    while (res_array[i] != '\0')
    {
        j = 0;
        while (sorted[j] !='\0')
        {
            if(res_array[i] == sorted[j])
            {
                index_arr[i] = j;
                break ;
            }
            j++;
        }
        i++;
    }
    return (result_arr);
}