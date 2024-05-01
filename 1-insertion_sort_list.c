#include "sort.h"
/**
 * insertion_sort_list - function
 * @list: list
 * Return: return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y, *h;

	if (!list || !*list)
		return;
	x = *list;
	while (x->next)
	{
		if (x->n > (x->next)->n)
		{
			y = x->next, x->next = y->next;
			if (y->next)
				(y->next)->prev = x;
			y->prev = x->prev;
			if (x->prev)
				(x->prev)->next = y;
			x->prev = y, y->next = x;
			if (!(y->prev))
				*list = y;
			print_list(*list);
			while (y->prev)
			{
				if (y->n < (y->prev)->n)
				{
					h = y->prev, y->prev = h->prev;
					(y->next)->prev = h, h->next = y->next;
					y->next = h;
					if (h->prev)
						(h->prev)->next = y;
					h->prev = y;
					if (!(y->prev))
						*list = y;
					print_list(*list);
				}
				else
					break;
			}
		}
		else
			x = x->next;
	}
}
