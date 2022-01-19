#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integer.
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the value, else -1
 */

int linear_search(int *array, size_t size, int value){
    size_t count = 0;
    while (count < size){
        printf("Value checked array[%ld] = [%d]\n", count, array[count]);
        if (value == array[count])
            return (count);
        count++;
        }
    return (-1);
}

int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}