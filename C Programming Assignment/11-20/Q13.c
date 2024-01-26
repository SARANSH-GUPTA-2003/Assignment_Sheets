#include<stdio.h>
int main() 
{
    int a;
    printf("Enter a number: "); scanf("%d",&a);

    if(a % 2)
    printf("Given number is not even\n");
    else
    printf("Given number is even\n");

    int b;
    printf("Enter a number: "); scanf("%d",&b);
    if(b % 3)
    printf("Given number is not divisible by 3\n");
    else
    printf("Given number is divisble by 3\n");

}
