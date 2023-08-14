#include<stdio.h>

main()
{
   int n, a = 0, b = 1, c=0;
  
   printf("Enter a value =");
   scanf("%d",&n);
   printf("%d,%d,",a,b);
   
   while ( c<=n )
   {
         c = a + b;
         a = b;
         b = c;
         
         
         printf("%d,",a);
   }
   

}
