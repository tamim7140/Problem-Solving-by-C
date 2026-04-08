#include<stdio.h>
int main()
{
    //Take a number from user and check if its a even number or odd number.
    int num;
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }

    return 0;
}