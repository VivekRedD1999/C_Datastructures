#include<stdio.h>
#include<stdio.h>
int maxsize=10;
int data,top,stack[10];
int isempty()
{
  if (top==-1)
  {
    return 1;
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
  }
  {
    return 0;
  }
}
int push(int data)
{
  if (!isfull)
  {top+=1;
    stack[top]=data;
    print("%d\n",data);
    return data;
  }
  else
    printf("stack is full");
}
int pop()
{
  if (!isempty)
  {
    top-=1;
    data=stack[top];
    print("%d\n",data);
    return data;
  }
  else
    printf("stack is empty");
}
int peek()
{
  //print("%d\n",stack[pop]);
  return stack[top];
}

int main()
{
  push(3);
  push(4);
  push(5);
  printf("peek element %d\n",peek());
  
  while(!isempty)
  {
    int data=pop();
    printf("%d \n",data);
    
  }
  
  printf("Stack full: %s\n" , isfull()?"true":"false");
  printf("Stack empty: %s\n" , isempty()?"true":"false");
}
