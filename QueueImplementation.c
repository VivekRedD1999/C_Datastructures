#include<stdio.h>
#include<conio.h>
int maxsize=10;
int queue[10];
int top=0,item;

int enqueue(int item)
{
    if (!full())
    {
        queue[top]=item;
        top=top+1;
        printf("pushed element is %d\n",item);
        return item;
    }
    else
    {
        printf("queue is full");
    }       
}
int dequeue()
{
    if (!isempty())
    {
        item=queue[0];
        top=top-1;
        printf("popped element is %d\n",item);
        return item;
    }
    else
    {
        printf("the queue is empty");
    }
}
int isempty()
{
    if (top==-1)
    {
        return -1;
    }
    else
    {
        return 0;
    }    
}
int isfull()
{
    if (top==maxsize)
    {
        return 1;
        //printf("queue is full");
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("%s\n",isempty()?"true":"false");
    printf("%s\n",isfull()?"true":"false");
    dequeue();
    
}
