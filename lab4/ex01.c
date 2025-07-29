#include<stdio.h>
int main()
{
    int i=1, num;
    int sum = 0;
    float average;
    for (int i = 1; i <= 10; i++)
    {
         printf("%d.Enter a number:", i);
        scanf("%d", &num);
         sum += num;
    }
    
    average = sum / 10.0;
    printf("Total sum is %d\n", sum);
    printf("Average is %.2f", average);
    return 0;
   

}