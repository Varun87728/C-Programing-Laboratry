#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d",&a,&b);
    c=a+b;
    a=b;
    b=c;
    c=a;
    printf("a: %d \n",a);
    printf("b: %d \n",b);
    printf("c: %d \n",c);
    return 0;
}


