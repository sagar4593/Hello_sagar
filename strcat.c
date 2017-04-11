#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * own_strcat(char *, char*);
main()
{
	printf("scan the streams...\n");

	char *a;
	char *b;

	//printf("sizeof===%d\n",sizeof(a));	
	//printf("sizeof===%d\n",sizeof(b));	
	a = (char *)malloc((sizeof(char *)) * 50); //*15);
	b = (char* )malloc((sizeof(char *)) * 50) ;//*15);
	
	scanf("%s %s",a,b);
	

	char * k = own_strcat(a,b);
	printf("strcat output====%s\n",k);
}

char * own_strcat(char *a, char*b)
{
	int i,j;	
	printf("a=%s b=%s\n",a,b);
	
	for(i=0;a[i];i++);
	for(j = 0;b[j];j++)
	{
		a[i] = b[j];
		i++;
	}
		
		return a;
}
