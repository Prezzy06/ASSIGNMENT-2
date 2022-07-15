// 9. WAP To Print Size Of int,a float,a char,a double type Variable

#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    char charType;
    double doubleType;

    printf("Size Of Int=%zu bytes\n",sizeof(intType));
    printf("Size Of float=%zu bytes\n",sizeof(floatType));
    printf("Size Of char=%zu bytes\n",sizeof(charType));
    printf("Size Of double=%zu bytes\n",sizeof(doubleType));
    return 0;
}


