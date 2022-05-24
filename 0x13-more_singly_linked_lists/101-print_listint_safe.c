#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff;

	register short count = 0;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %f\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %f\n", (void *)head->next, head->next->n);
			break;
		}

	}
	return (count);
}
