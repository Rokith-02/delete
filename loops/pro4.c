#include<stdio.h>

int main()
{
	int n;
        printf("enter no of elements: ");
        scanf("%d",&n);
	int a[n],i;
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        int cnt=0,no=1;
        for(i=0;i<n;i++)
        {
                if((arr[i]==no)&&(cnt<no))
                {
                        cnt++;
                        if(cnt>=no)
                        {
                                no++;
                         cnt=0;
                         continue;
			                  }
                }
                else
                {
                        printf("\ninvalid sequence\n");
                        return 0;
                }
	}
	printf("It is valid sequence\n");
return 0;
}
