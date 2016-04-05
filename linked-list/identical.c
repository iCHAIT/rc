# include <stdio.h>
# include <stdlib.h>
#include <stdbool.h>

struct node {

	int data;
	struct node *next;
};

bool isIdentical(struct node *a, struct node *b)
{

	while (a != NULL && b != NULL)
	{
		if(a->data != b->data)
			return false;

		a=a->next;
		b=b->next;

	}

	return (a == NULL && b ==NULL); // would be true if identical


}


void push(struct node **head_ref ,int new_data)
{

	struct node *new_node;

	new_node = (struct node *)malloc(sizeof(struct node));

	new_node->next = (*head_ref);

	(*head_ref) = new_node;


}


int main()
{


	/* The constructed linked lists are :
	 a: 3->2->1
	 b: 3->2->1 */

	struct node *a = NULL;
	struct node *b = NULL;

	push(&a, 1);
	push(&a, 2);
	push(&a, 3);

	push(&b, 1);
	push(&b, 2);
	push(&b, 3);


	isIdentical(a, b)?printf("IDENTICAL"):printf("NOT IDENTICAL");;



}