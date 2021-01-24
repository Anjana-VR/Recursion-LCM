#include <stdio.h>
#include<conio.h>

int lcm(int x,int y)
{
    static int m=0;
    m+=y;
    if((m%x==0) && (m%y==0))
        return m;
    else
        return lcm(x,y);
}

void main()
{
    int n1,n2,ans;
    printf("Input first number: ");
    scanf("%d",&n1);
    printf("Input second number: ");
    scanf("%d",&n2);
    if(n1 > n2)
    {
        ans=lcm(n2,n1);
    }
    else
    {
        ans=lcm(n1,n2);
    }
    printf("LCM of %d and %d = %d",n1,n2,ans);
}
