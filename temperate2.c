#include<stdio.h>

main()
{
               int a=1,num;
               printf("Enter any number:");
               scanf("%d",&num);
               while(a<=10)
               {
                              printf("%d * %d = %d\n",num,a,num*a);
                              a++;
               }
}
