#include<stdio.h>
void find_max(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    printf("%d",a);
    else if(b>a && b>c && b>d)
    printf("%d",b);
    else if(c>a && c>b && c>d)
    printf("%d",c);
    else
    printf("%d",d);
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    find_max(a,b,c,d);
}
