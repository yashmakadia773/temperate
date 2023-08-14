#include<stdio.h>

main()
{
	int count=0,n;
	
	printf("Enter value :- ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n = n/10;
		count ++;
	}
	printf("total digit = %d",count);
}
