// 13. WAP to take a 3 digit number from the user and rotate its digit By one position towards right.

#include<stdio.h>
int main()
{
    int n;
     printf("Enter n:");
     scanf("%d",&n);
     printf("After Rotation=%d",n/10+n%10*100);
     return 0;

}
