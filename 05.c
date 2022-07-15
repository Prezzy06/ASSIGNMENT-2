// 5. WAP To input 3 Digit Number And Display Sum of Number on screen

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter 3 Digit Number:");
    scanf("%d",&n);
    printf("Sum of Number =%d",n/100+n/10%10+n%10);
    return 0;
}

