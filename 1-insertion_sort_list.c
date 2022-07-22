#include "sort.h"
/**
*insertion_sort_list - implements insertion sort algorithm in c
*@list: list of integers
*Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *temp, *temp2, *temp3;
if (list == NULL || *list == NULL)
{
return;
}
temp = *list;
while (temp->next != NULL)
{
temp2 = temp;
temp3 = temp->next;
while (temp3 != NULL && temp3->n < temp2->n)
{
temp2 = temp3;
temp3 = temp3->next;
}
if (temp3 != NULL)
{
temp2->next = temp3->next;
temp3->next = temp3->next->next;
temp2->next->next = temp3;
}
temp = temp->next;
}
}
