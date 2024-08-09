#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @liste :  pointer to the head of the doubly linked list
*/

void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next = NULL;

	while (current)
	{
	next = current->next;
	listint_t *insert_pos = sorted;

	if (!sorted || sorted->n >= current->n)
	{
		current->next = sorted;
		current->prev = NULL;

	    if (sorted)
		{
		sorted->prev = current;
		}
		sorted = current;
	}
	else
	{
	while (insert_pos->next && insert_pos->next->n < current->n)
	{
		insert_pos = insert_pos->next;
	}
		current->next = insert_pos->next;
	if (insert_pos->next)
		{
		insert_pos->next->prev = current;
		}

	insert_pos->next = current;
	current->prev = insert_pos;
	
// Affichage de l'état actuel de la liste après chaque insertion
        listint_t *tmp = sorted;
        printf("Current list: ");
        while (tmp)
        {
            printf("%d ", tmp->n);
            tmp = tmp->next;
        }
        printf("\n");
	
	}

	current = next;
	}

	*list = sorted;
}
