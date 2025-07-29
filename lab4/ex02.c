#include<stdio.h>
int main()
{
    int i=1, num;
    int sum = 0;
    
    
   
    do 
    {
         printf("%d.Enter a number:", i);
        scanf("%d", &num);
         sum += num;
         i++;
    }
    while (i<=10);
   
    printf("Total sum is %d\n", sum);
    
    return 0;
   
}