#include<stdio.h>
void main()
{
    int a,b,c,result;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    printf("Enter value of c");
    scanf("%d",&c);

    result=a<b && b<c;
    printf("\n%d=%d<%d&& %d<%d",result,a,b,b,c);
    result=a>b || b>c;
    printf("\n%d=%d<%d || %d<%d",result,a,b,b,c);
    result=a<b && b<c;
    printf("\n%d=%d<%d&& %d<%d",result,a,b,b,c);
}