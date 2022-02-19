#include <stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE* next;
	int data;
};

void addFisrt(struct NODE* target, int data)
{
	struct NODE* newNode = malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;

	target->next = newNode;
}

struct NODE* findNode(struct NODE* node, int data)
{
	if (node == NULL)
		return NULL;

	struct NODE* curr = node->next;

	while (curr != NULL)
	{
		if (curr->data == data)
			return curr;

		curr = curr->next;
	}
	return NULL;
}

int main()
{
	struct NODE* head = malloc(sizeof(struct NODE));
	head->next = NULL;

	addFisrt(head, 10);
	addFisrt(head, 20);
	addFisrt(head, 30);

	struct NODE* found = findNode(head, 20);
	printf("%d\n", found->data);

	struct NODE* curr = head->next;
	while (curr != NULL)
	{
		struct NODE* next = curr->next;
		free(curr);
		curr = next;
	}
	free(head);

	return 0;
}