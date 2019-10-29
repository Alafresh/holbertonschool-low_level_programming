#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void swap_int(int *a, int *b);
void insertion_sort_list(listint_t **list);
void _swap(listint_t *left, listint_t *right);
void print_list(const listint_t *list);
int lomuto(int *array, int low, int high);
void quick_sort(int *array, size_t size);
size_t dlistint_len(const listint_t *h);
listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index);
void selection_sort(int *array, size_t size);
void quickSort(int *array, int l, int h);

#endif
