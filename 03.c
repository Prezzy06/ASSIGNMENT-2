// 3. WAP To Swap Two values of Two int Variables

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter The Value of a,b:");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf("After Swapping Values=%d%d",a,b);
    return 0;
}
