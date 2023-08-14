#include<stdio.h>

main()
{
	int last,first,sum,n;
	
	printf("Enter value :- ");
	scanf("%d",&n);
	
	last = n%10;
	
	while(n>=10)
	{
		n = n/10;
		
	}
	
	first=n;
	sum = first + last;
	
	printf("sum of first digit and last digit = %d",sum);
}
