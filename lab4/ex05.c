#include<stdio.h>
int main()
{
    int num;
    int i;
    int factorial =1;

    printf("Enter a number:" );
        scanf("%d", &num);
    
    
        for (i = 1; i <= num; i++) {
        factorial *= i;
        }
         
        printf("factorial of %d is %d\n", num, factorial);
    return 0;
   

}