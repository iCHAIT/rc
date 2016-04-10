# include <stdio.h>

int main(void)
{
	char str[50];
	printf("\nENter string:");
	gets(str);
	int c=0;
	int count[26] = {0};


	while(str[c] != '\0')
	{
		if(str[c]>='a' && str[c]<='z')
			count[str[c]-'a']++;

		c++;
	}


	for(c=0;c<26;c++)
	{
		if(count[c] != 0)
			printf("\nFreq of %c is %d",c+'a',count[c]);
	}



}