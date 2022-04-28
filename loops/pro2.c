#include<stdio.h>
void add(int a,int b)
{
        printf("%d\n",a+b);
}
void sub(int a,int b)
{
        printf("%d\n",a-b);
}
int main()
{
        int d,f;
        while(1){
        printf("enter the two integer\n");
        scanf("%d %d",&d,&f);
        char a;
        printf("a(add) or s(diff)\n");
        scanf(" %c",&a);
        switch(a)
        {
                case 'a' :add(d,f);break;
                case 's' :sub(d,f);break;
                default:return 0;
        }
        }
}
