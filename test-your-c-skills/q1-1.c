# include <stdio.h>
# include <stdlib.h>

int main()
{
     int i=20,*p;
     char ch='a',*cp;
     float f=22.3,*fp;
     printf("%d %d %d\n",sizeof(p),sizeof(cp),sizeof(fp));
     printf("%d %d %d\n",sizeof(*p),sizeof(*cp),sizeof(*fp));
     printf("%d %d %d\n",sizeof(i),sizeof(ch),sizeof(f));
     return 0;
 }