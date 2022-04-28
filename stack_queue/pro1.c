#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
        int a;
        struct st *next;
}st;
void push(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        printf("enter the data to push\n");
        scanf(" %d",&temp->a);
        if(*ptr==NULL)
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                st*last=*ptr;
                temp->next=last;
                *ptr=temp;
        }
}
void display(st*ptr)
{
        if(ptr==NULL){
        printf("stack is empty\n");
        return;}
        while(ptr!=0)
        {
                printf("%d\n",ptr->a);
                ptr=ptr->next;
        }
}
void pop(st**ptr)
{
        if(*ptr==NULL){
        printf("stack is underflow\n");
        return;}
        st*temp=*ptr;
        *ptr=(*ptr)->next;
        free(temp);
        temp=NULL;
}
int main()
{
        st*hptr=0;
        int op;
        while(1)
        {
        printf("enter the option 1)push 2)display 3)pop 4)exit\n");
        scanf(" %d",&op);
        switch(op)
        {
                case 1:push(&hptr);break;
                case 2:display(hptr);break;
                case 3:pop(&hptr);break;
                default:return 0;
        }
        }
}
