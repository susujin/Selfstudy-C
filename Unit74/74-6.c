#define _CRT_SECURE_NO_WARNINGS
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

void removeNode(struct NODE* node, int data)
{
	if (node == NULL)
		return NULL;

	struct NODE* n = node;
	while (n != NULL)
	{
		struct NODE* m = n->next;
		if (m->data == data)
		{
			n->next = m->next;
			free(m);
			break;
		}
		n = n->next;
	}
}

int main()
{
	int numArr[10] = { 0, };
	int removeNum;

	scanf("%d %d %d %d %d %d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4], &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
	scanf("%d", &removeNum);

	struct NODE* head = malloc(sizeof(struct NODE));
	head->next = NULL;

	for (int i = 0; i < 10; i++)
	{
		addFisrt(head, numArr[i]);
	}

	removeNode(head, removeNum);

	struct NODE* curr = head->next;
	while (curr != NULL)
	{
		printf("%d ", curr->data);
		curr = curr->next;
	}

	curr = head->next;
	while (curr != NULL)
	{
		struct NODE* next = curr->next;
		free(curr);
		curr = next;
	}
	free(head);
	return 0;
}