#include<stdio.h>
int main()
{
    //In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a). 
    int num1;
    int num2;
    scanf("%d%d",&num1, &num2);
    if(num1%num2==0 || num2%num1==0)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}