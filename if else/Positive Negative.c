#include<stdio.h>
int main()
{
    //Take a number from user and check if its a positive or negative number.
    int num;
    scanf("%d", &num);
    if(num>0)
    {
        printf("positive number");
    }
    else if(num == 0)
    {
        printf("nighter positive nor nagetive");
    }
    else{
        printf("nagative number");
    }

    return 0;
}