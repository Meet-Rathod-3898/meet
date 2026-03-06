#include<stdio.h>
void main()
{
    int a,b;
      printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    a+=b;
    printf("\na is:%d",a);
    a-=b;
    printf("\na is:%d",a);
    a*=b;
    printf("\na is:%d",a);
    a/=b;
    printf("\na is:%d",a);
}