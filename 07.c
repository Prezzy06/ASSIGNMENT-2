// 7. WAP To Find the position of First 1 in LSB.

#include<stdio.h>
#include<math.h>

int main()
{
    int count = 0;
    int n;
    int result = 0;
    scanf("%d",&n);

    while(n!=0){
        result = n&1;
        count++;
        if(result==1){
            printf("%d",count);
            break;
        }
        n = n >> 1;
    }
}



