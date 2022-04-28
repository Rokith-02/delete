#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        int a;
        struct st *next;
}st;
void enqueue(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        printf("enterm the data\n");
        scanf(" %d",&temp->a);
        if(*ptr==NULL)
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                st*last=*ptr;
                while(last->next!=0)
                last=last->next;

                temp->next=last->next;
                last->next=temp;
        }

}
void dequeue(st**ptr)
{
        if(*ptr==NULL)
        {
                printf("queue is underflow\n");
                return;
	}
	st*temp=*ptr;
        *ptr=(*ptr)->next;
        free(temp);
        temp=NULL;
}
void display(st*ptr)
{
        if(ptr==NULL)
        {
                printf("queue is empty\n");
                return;
        }
        st*temp=ptr;
        while(temp!=NULL)
        {
                printf("%d\n",temp->a);
                temp=temp->next;
        }
}
int main()
{
        st*hptr=0;
        int op;
        while(1)
        {
		printf("enter the option 1)enqueue 2)dequeue 3)display 4)exit\n");
        scanf(" %d",&op);
        switch(op)
        {
                case 1:enqueue(&hptr);break;
                case 2:dequeue(&hptr);break;
                case 3:display(hptr);break;
                default:return 0;
        }
        }
}
