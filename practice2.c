#include<stdio.h>
int main()
{
    
    int i =1;
    int final = 100;
    int sum =0;
    do

    {
        sum = sum + i;
        i++;
    }
    while(i<=final);
    printf("Sum of 1 to final is :%d\n",sum);


return 0;
}   

