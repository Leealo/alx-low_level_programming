#include "lists.h"
/**
 * print_list:prints all elements of a list
 * @h:singly linked list
 * Return:number of elements
 */
size_t print_list(const list_h *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n",
		else
		        printf("[%d] %s\n",
		h = h-> next;
		nelem++;
	}
	return (nelem);
}
