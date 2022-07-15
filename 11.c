// 11. WAP TO input a number from the user and also input a digit.Append the digit in the number and print the resulting number.

#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter n,d:");
    scanf("%d%d",&n,&d);
    n = n + d;
    printf("Resulting Number=%d",n);
    return 0;
}
