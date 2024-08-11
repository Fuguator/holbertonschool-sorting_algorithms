#include "sort.h"
/**
 * insertion_sort_list - func
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *tmp;

	if (list == NULL || *list == NULL)
		return;

	cur = (*list)->next;

	while (cur != NULL)
	{
		tmp = cur->next;
		while (cur->prev && cur->n < cur->prev->n)
		{
			cur->prev->next = cur->next;
			if (cur->next)
				cur->next->prev = cur->prev;
			cur->next = cur->prev;
			cur->prev = cur->next->prev;
			cur->next->prev = cur;
			if (!cur->prev)
				*list = cur;
			else
				cur->prev->next = cur;
			print_list(*list);
		}
		cur = tmp;
	}
}
