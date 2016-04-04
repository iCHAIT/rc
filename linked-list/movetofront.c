# include <stdio.h>
# include <stdlib.h>

struct node{

	int data;
	struct node *next;

};

void movetofront(struct node **head_ref)
{

	if (*head_ref == NULL || (*head_ref)->next == NULL)
		return;

	struct node *last = *head_ref;
	struct node *sec_last = NULL;

	while(last->next != NULL)
	{
		sec_last = last;
		last = last->next;

	}

	sec_last->next = NULL;
	last->next = *head_ref;
	*head_ref = last;


}


void push(struct node **head_ref, int new_data)
{
	struct node *new_node;

	new_node = (struct node *)malloc(sizeof(struct node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;

}

void printlist(struct node *node)
{

	while (node != NULL)
	{
		printf("%d", node->data);
		node = node->next;
	}

}


int main()
{

	struct node *start = NULL;

	push(&start, 5);
	push(&start, 4);
	push(&start, 3);
	push(&start, 2);
	push(&start, 1);

	printlist(start);

	movetofront(&start);

	printlist(start);

	return 0;

}