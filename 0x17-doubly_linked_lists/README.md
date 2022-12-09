FILE	DESCRIPTION
0-print_dlistint.c	function that prints all the elements of a dlistint_t list.
1-dlistint_len.c	function that returns the number of elements in a linked dlistint_t list.
2-add_dnodeint.c	function that adds a new node at the beginning of a dlistint_t list.
3-add_dnodeint_end.cb	function that adds a new node at the end of a dlistint_t list.
4-free_dlistint.c	function that frees a dlistint_t list.
5. Get node at index	function that returns the nth node of a dlistint_t linked list.
6-sum_dlistint.c	function that returns the sum of all the data (n) of a dlistint_t linked list.
7-insert_dnodeint.c	function that inserts a new node at a given position.
8-delete_dnodeint.c	function that deletes the node at index index of a dlistint_t linked list.
100-password	The program prints “OK” when the password is correct
103-keygen.c	keygen for crackme5
Print list
function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h); Return: the number of nodes Format: see example #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

/**

main - check the code

Return: Always EXIT_SUCCESS. */ int main(void) { dlistint_t *head; dlistint_t *new; dlistint_t hello = {8, NULL, NULL}; size_t n;

head = &hello; new = malloc(sizeof(dlistint_t)); if (new == NULL) { dprintf(2, "Error: Can't malloc\n"); return (EXIT_FAILURE); } new->n = 9; head->prev = new; new->next = head; new->prev = NULL; head = new; n = print_dlistint(head); printf("-> %lu elements\n", n); free(new); return (EXIT_SUCCESS); }

List length
function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

/**

main - check the code

Return: Always EXIT_SUCCESS. */ int main(void) { dlistint_t *head; dlistint_t *new; dlistint_t hello = {8, NULL, NULL}; size_t n;

head = &hello; new = malloc(sizeof(dlistint_t)); if (new == NULL) { dprintf(2, "Error: Can't malloc\n"); return (EXIT_FAILURE); } new->n = 9; head->prev = new; new->next = head; new->prev = NULL; head = new; n = dlistint_len(head); printf("-> %lu elements\n", n); free(new); return (EXIT_SUCCESS); }

Add node
function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n); Return: the address of the new element, or NULL if it failed #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

/**

main - check the code

Return: Always EXIT_SUCCESS. */ int main(void) { dlistint_t *head;

head = NULL; add_dnodeint(&head, 0); add_dnodeint(&head, 1); add_dnodeint(&head, 2); add_dnodeint(&head, 3); add_dnodeint(&head, 4); add_dnodeint(&head, 98); add_dnodeint(&head, 402); add_dnodeint(&head, 1024); print_dlistint(head); return (EXIT_SUCCESS); }

Add node at the end
function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); Return: the address of the new element, or NULL if it failed

Free list
function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

Get node at index
function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); where index is the index of the node, starting from 0 if the node does not exist, return NULL

Sum list
function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head); if the list is empty, return 0

Insert at index
function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); where idx is the index of the list where the new node should be added. Index starts at 0 Returns: the address of the new node, or NULL if it failed if it is not possible to add the new node at index idx, do not add the new node and return NULL Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction

Delete at index
function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); where index is the index of the node that should be deleted. Index starts at 0 Returns: 1 if it succeeded, -1 if it failed

Crackme4
Find the password for crackme4.

Save the password in the file 100-password Your file should contain the exact password, no new line, no extra space Hint: The program prints “OK” when the password is correct

Palindromes
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Save the result in the file 102-result Your file should contain the exact result, no new line, no extra space

crackme5
Write a keygen for crackme5.

Usage of the crackme: ./crackme5 username key The crackme will segfault if you do not enter the correct key for the user Usage for your keygen: ./keygen5 username Your keygen should print a valid key for the username
