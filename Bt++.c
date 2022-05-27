#include<stdio.h>
int main()
{
    int n,count=0;
    char x[50];
    scanf("%d",&n);
    for(int i = 0; i<n; i++)
    {
        scanf("%s",x);
        if(x[1]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("%d",count);

    return 0;
}
