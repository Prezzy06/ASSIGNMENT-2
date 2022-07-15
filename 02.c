// 2. WAP To print given number without its last number.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Number Without Unit Digit=%d",n/10);
    return 0;
}

