#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the num of the elements in the node
 * @h: pointer to the head of the list
 * Return: num of elements in the list
 */


size_t listint_len(const listint_t *h)
{
size_t counter = 0;
const struct listint_s *ptr;
ptr = h;

while (ptr != NULL)
{
counter++;
ptr = ptr->next;
}
return (counter);
}
