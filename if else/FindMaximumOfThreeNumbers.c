#include<stdio.h>
int main()
{
    //Write a C program to find maximum between three numbers.
    int a, b, c;
    scanf("%d%d%d",&a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("maximum is %d",a);
        }
        else{
            printf("maximum is %d",c);
        }
    }
    else if(b>c)
    {
        printf("maximum is %d",b);
    }
    else if(c>b)
    {
        printf("maximum is %d",c);
    }

    else{
        printf("all are same");
    }


    return 0;
}