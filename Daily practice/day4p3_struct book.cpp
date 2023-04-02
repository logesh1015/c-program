#include<stdio.h>
struct book
{
	char title[50];
	char author[50];
	float prize;
}b[5];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s %s %f\n",b[i].title,b[i].author,&b[i].prize);
	} 
	for(i=0;i<5;i++)
	{
		printf("%s %s %f\n",b[i].title,b[i].author,b[i].prize);
	}
}
