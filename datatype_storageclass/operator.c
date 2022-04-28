#include<stdio.h>
double cash;
double list=0;
void addamount()
{
        int add;
        printf("enter the amount\n");
        scanf(" %d",&add);
        cash=cash+add;
}
void coldcoffee(float cc)
{
        if(cash>=10.50){
                list=list+cc;
                cash=cash-cc;}
        else
        {
                char r;
                printf("your balance is low would you like to add(y/n)\n");
                scanf(" %c",&r);
                if(r=='y'||r=='Y')
                        addamount();
                else
                        return;


        }
}
void espresso(float es)
{
        if(cash>=20.34){
                list=list+es;
                cash=cash-es;}
	else
        {
                char r;
                printf("your balance is low would you like to add(y/n)\n");
                scanf(" %c",&r);
                if(r=='y'||r=='Y'){
                        addamount();}
                else{
                        return;}
        }
}
void cappuccino(int cap)
{
        if(cash>=20.34)
        {
                list=list+cap;
                cash=cash-cap;
        }
        else
        {
                char r;
                printf("your balance is low would you like to add(y/n)\n");
                scanf(" %c",&r);
                if(r=='y'||r=='Y')
                        addamount();
                else
                        return;
        }
}
void tea(int t)
{
        if(cash>=20.34){
                list=list+t;
		 cash=cash-t;}
        else
        {
                char r;
                printf("your balance is low would you like to add(y/n)\n");
                scanf(" %c",&r);
                if(r=='y'||r=='Y')
                        addamount();
                else
                        return;
        }
}
int main()
{
        char op;
        char ab;
        int a,t=7,cap=30;
        float cc=10.50,es=20.34;
        printf("enter the total cash\n");
        scanf("%lf",&cash);
        printf("\nWelcome to the cafe\n");
        printf("Here is the menu card\n");
        do
        {
                if(cash>0&&cash<=cash)
                {
                        printf("choose from the list\n");
                        printf("1.cold coffee Rs.10.50\n");
                        printf("2.Espresso Rs.20.34\n");
                        printf("3.cappuccino Rs.30\n");
			printf("4.Tea Rs.7\n");
                        printf("just enter the option 1/2/3/4\n");
                        scanf("%d",&a);
                        switch(a)
                        {
                                case 1:coldcoffee(cc);break;
                                case 2:espresso(es);break;
                                case 3:cappuccino(cap);break;
                                case 4:tea(t);break;
                                default:return 0;
                        }
                        printf("your balace amount:%0.2lf\n",cash);
                        if(cash>=0){
                                printf("Do you want to add any thing (y/n)\n");
                                scanf(" %c",&op);}
                }
        }while(op=='y'||op=='Y');
        printf("total amount you purchase:%0.2lf\n",list);
        if(cash>0)
        printf("Your Balance=%0.2f",cash);
}
