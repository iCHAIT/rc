# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;

};

void reverse(struct node **head_ref)
{
     struct node *temp = NULL;
     struct node *current = *head_ref;

     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;
       current = current->prev;
     }

     if(temp != NULL )
        *head_ref = temp->prev;
}



void push(struct node **head_ref, int new_data)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	new_node->data = new_data;

	new_node->prev = NULL;

	new_node->next = (*head_ref);

	if((*head_ref) !=  NULL)
	     (*head_ref)->prev = new_node ;


	(*head_ref) = new_node;


}

void printlist(struct node *node)
{

	while(node != NULL)
	{
		printf("%d", node->data);
		node = node->next;
	}

}

int main()
{
	struct node *head = NULL;

	push(&head, 2);
	push(&head, 4);
	push(&head, 8);
	push(&head, 10);

	printf("Originial LL:");
	printlist(head);

	reverse(&head);
	printf("LL after reversing:");
	printlist(head);

	return 0;
}