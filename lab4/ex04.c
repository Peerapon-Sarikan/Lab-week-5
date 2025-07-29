#include<stdio.h>
int main()
{
    int num, i = 1;
    printf("%d.Enter a number:", i);
        scanf("%d", &num);
    printf("Multiplication Table for %d:\n", num);
    do 
    {
        printf("%d * %d = %d\n", num, i, num * i);
         i++;
    }
    while (i<=12);
   
    
    return 0;
}