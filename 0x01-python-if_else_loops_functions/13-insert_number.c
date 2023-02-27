#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the head of the list
 * @number: number to be inserted
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current, *previous;

    if (head == NULL)
        return (NULL);

    /* create new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = number;
    new_node->next = NULL;

    /* find insertion point */
    current = *head;
    previous = NULL;
    while (current != NULL && current->n < number) {
        previous = current;
        current = current->next;
    }

    /* insert new node */
    if (previous == NULL) {
        /* insert at head */
        new_node->next = *head;
        *head = new_node;
    } else {
        /* insert after previous */
        previous->next = new_node;
        new_node->next = current;
    }

    return (new_node);
}
