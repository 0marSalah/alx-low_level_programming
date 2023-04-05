#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* find_listint_loop - a function that finds the loop in a linked list.
* @head: holds a pointer linked list
* Return: the size of the list
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s_ptr, *f_ptr;

	s_ptr = head;
	f_ptr = head;

	while (s_ptr && f_ptr && f_ptr->next != NULL)
	{
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;
		if (s_ptr == f_ptr)
		{
			s_ptr = head;
			while (s_ptr != f_ptr)
			{
				s_ptr = s_ptr->next;
				f_ptr = f_ptr->next;
			}
			return (s_ptr);
		}
	}
	return (NULL);
}
