#include<stdio.h>
void fun();
void fun1();
static int count1=0;
//auto int e=0 auto cant be define in global
int main()
{
        auto int a;//stack session
        int i;
        extern int b;
        printf("extern:%d\n",b);// i initialized b value in another file
        register int c;//faster access
        //int*p=&c; // invalid register variable address cant be access
        for(i=0;i<5;i++)
                fun();
        for(i=0;i<5;i++)
                fun1();
        printf("static count1:%d\n",count1);
//      printf("auto e:%d",e)  invalid
}
void fun()
{
        static int count=0;
        count++;
        auto int d=0;
        d++;
        printf("static count:%d\n",count);
        printf("auto d:%d\n",d);
}
void fun1()
{
        count1++;
        auto int e=0;
	 e++;
        printf("auto int e:%d\n",e);  //reinitialized every time
}
