// 12. Assume Price of 1 USD is INR 76.23. Write a Program To Take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter Currency in INR:");
    scanf("%f",&INR);

    USD=INR/76.23;
    printf("USD=%f",USD);
    return 0;
}

