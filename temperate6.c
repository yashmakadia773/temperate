#include<stdio.h>

main()
{
     int i,n,f=1;
               printf("Enter any number:-");
               scanf("%d",&n);
 
               for(i=1;i<=n;i++)
               {
                   f = f * i;
               }
 
               printf("factorial of %d = %d",n,f);
               getch();

}
