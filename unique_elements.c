#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    a[j]=1000;
                }
            }
        }
        if(a[i]!=1000)
        {
            printf("%d ",a[i]);
        }
    }
}
