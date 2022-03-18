#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,p,c=0,i=0,j=0;
    scanf("%d %d %d",&n,&k,&p);
    int * x = calloc(n,sizeof(int));
    int * r = calloc(n,sizeof(int));
    r[n-1]=-1;
    while(r[n-1]==-1)
    {
        if(x[i]!=1)
        {
            c++;
            if(c==k)
            {
                x[i]=1;
                c=0;
                r[j]=i;
                j++;
            }
        }
        i++;
        if(i==n)
        i-=n;
    }
    for(int o=1;o<=p;o++)
    {
        printf("%d ",(r[n-o])+1);
    }
}