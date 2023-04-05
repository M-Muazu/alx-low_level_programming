#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @top: pointer to the first node in the list
 * @h: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **top, const int h)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->h = h;
new->next = *top;
*top = new;

return (new);
}
