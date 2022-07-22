#include "sort.h"
/**
*bubble_sort - implements bubble sort algorithm in c
*@array: array of integers
*@size: size of array
*Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t i = 0;
unsigned int temp;
int noswap = 0;
if (array == NULL || size < 2)
{
return;
}
while (noswap == 0)
{
noswap = 1;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
noswap = 0;
print_array(array, size);
}
}
}
}
