#include<stdio.h>
int main()
{
        int a,sum=0;
        printf("enter the data to add\n");
        //option a
#if 0
        while(1)
        {
                scanf(" %d",&a);
                if(a<0)
                {
                printf("Total :%d",sum);
                break;
                }
                else{
                sum=sum+a;
                printf("Total no:%d\n",sum);
                }
        }
#endif
#if 1
        while(1)
        {
                scanf(" %d",&a);
                if(a<0)
                {
                printf("Total no:%d\n",sum);
                continue;
                }
                else{
                        sum=sum+a;
                        printf("Total no:%d\n",sum);
                }
	 }
#endif
}
