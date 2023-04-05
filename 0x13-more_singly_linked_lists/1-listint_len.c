#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @n: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *n)

{
size_t number = 0;


while (n)
{
number++;
n = n->next;
}

return (number);
}
