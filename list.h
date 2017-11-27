#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *next;
};

typedef struct node NODE;
typedef NODE * LINK;

LINK creat_node(int value)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	cur->value = value;
	cur->next = NULL;
	return cur;
}

LINK append(LINK head, LINK cur)
{
	LINK next_node = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}
	while (next_node->next != NULL)
		next_node = next_node->next;
	next_node->next = cur;
	return head;
}
