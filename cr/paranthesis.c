#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
	char stack[max],exp[100];
	int top,i;
	top = -1;

	printf("\nEnter an infix expression ");
	gets(exp);

	for(i=0; exp[i] != '\0'; i++)
	{
		if( exp[i]=='(' || exp[i] =='[' || exp[i] == '{' )
		{
			top++;
			stack[top]= exp[i];
		}

		else if ( exp[i] == ')' )
		{
			if( stack[top] == '(' )
				top--;

			else
				{
					printf("Unbalanced exp");
					exit(0);
				}
		}

		else if ( exp[i] == ']' )
		{
			if( stack[top] == '[' )
				top--;
			else
				{
					printf("Unbalanced exp");
					exit(0);
				}
		}

		else if ( exp[i] == '}' )
		{
			if( stack[top] == '{' )
				top--;
			else
				{
					printf("Unbalanced exp");
					exit(0);
				}
		}
	}

	if( top == -1 )
		printf("Exp is balanced");
	else
		printf("Exp is not balanced");

	return 0;
}