#include<stdio.h>

main()
{
	int temp,a,b=0,n;
	
	printf("Enter value :- ");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		a= n%10;
		b=b*10+a;
		n = n/10;
	}
	if(temp==b)
	{
		printf("number is palindrome");
	}
	else
	{	
		printf("number is not palindrome");
	}
	
}
