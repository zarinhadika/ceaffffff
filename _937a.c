#include<stdio.h>
int main()
{

    int a,b,c,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        scanf("%d %d %d",&a,&b,&c);
        if(a<b&&b<c)
        {
            printf("STAIR\n");
        }
        else if(a<b&&b>c)
        {
            printf("PEAK\n");
        }
        else
            {
                printf("NONE\n");
    }
    }
    return 0;
}
