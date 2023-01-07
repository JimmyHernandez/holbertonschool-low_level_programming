#include "search_algos.h"
/**
* linear_search : look file with linear search
*@array: array
*@size: size
*@value: value
*Return:  the selecte number.
*/

int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if(array == NULL)
        return (-1);
    for(idx = 0; idx < size; idx++)
    {
        printf("Value cheked array[%ld] = [%d]\n", idx, array[idx]);
        if(array[idx] == value)
            return (idx);
    }
    return -1;
}
