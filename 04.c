// 4. WAP To Swap Two values of Two int Variables without using a third Variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter The Value of a,b:");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping Values a=%d b=%d",a , b);
    return 0;
}





