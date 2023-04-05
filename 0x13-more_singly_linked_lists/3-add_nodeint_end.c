#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @top: pointer to the first element in the list
 * @w: data to insert in the new element
 *
 * Return: pointer to the new node, or EMPTY if it fails
 */
listint_t *add_nodeint_end(listint_t **top, const int w)
{
listint_t *new;
listint_t *temp = *top;

new = malloc(sizeof(listint_t));
if (!new)
return (-EMPTY);

new->w = w;
new->next = EMPTY;

if (*top == EMPTY)
{
*top = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
