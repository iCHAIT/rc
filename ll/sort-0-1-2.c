# include <stdio.h>
# include <stdlib.h>

int n1, n2, n3;
struct node {

	int data;
	struct node *next;
};


void countocc(struct node *node)
{

	while(node !=NULL)
	{
		if(node->data == 0)
			n1++;
		else if(node->data == 1)
			n2++;
		else
			n3++;

		node = node->next;
	}


}

void sort(struct node *head)
{
	struct node *temp = head;
	int i=0;
	while (temp != NULL)
	{
		if(n1 != 0)
		{
			temp->data = 0;
			temp = temp->next;
			n1--;
		}

		else if(n2 != 0)
		{
			temp->data = 1;
			temp = temp->next;
			n2--;
		}

		else if(n3 != 0)
			{
				temp->data = 2;
				temp = temp->next;
				n3--;
			}
	}


}


void push(struct node **head_ref, int new_data)
{

	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;

}

void printlist(struct node *node)
{

	while(node != NULL)
	{
		printf("%d->", node->data);
		node = node->next;
	}


}


int main()
{

	struct node *head = NULL;

	push(&head, 0);
	push(&head, 1);
	push(&head, 2);
	push(&head, 2);
	push(&head, 1);
	push(&head, 0);
	push(&head, 0);
	push(&head, 1);
	push(&head, 2);
	push(&head, 0);
	push(&head, 0);


	printlist(head);

	countocc(head);

	sort(head);

	printf("\n\n");

	printlist(head);

}