#include "sort.h"
/**
* bubble_sort - implements bubble sort algorithm in c
* @array: array of integers
* @size: size of array
* Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    if (array == NULL || size < 2)
        return;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
