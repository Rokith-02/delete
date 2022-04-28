#include<stdio.h>
int main()
{
        int n,i,j,k;
        printf("enter the size\n");
        scanf("%d",&n);
        for(i=0;i<n;i++,printf("\n"))
        {
                for(j=-n;j<=n;j++)
                {
                        if(j<0)
                                k=-j;
                        else
                                k=j;
                        if(j==0);
                        else if((j<0)&&(k==(i+1)))
                                printf("/");
                        else if((j>0)&&(k==(i+1)))
                                printf("\\");
                        else if((i+1)==n)
                                printf("_");
                        else
                                printf(" ");
                }
        }
}
