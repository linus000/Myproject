#include<stdio.h>

int size=6;
int arrystack[6];
int top=-1;
push()
	{
//	printf("push is called.\n");
	if(!isfull())
	{
		top++;
		printf("Ntr an elemnt to push to the stack\n");
		scanf("%d",&arrystack[top]);
//		printf("current size of stack :%d\n",top+1);
	}
	}
pop()
	{
//	printf("pop is called.\n");
	if(!isempty())
		peek();
		
	}
peek()
{
	printf("element at the top of the stack:%d\n",arrystack[top]);
	top--;
}
Display()
	{
//	printf("Dispaly is called.\n");
	if(top==-1)
		printf("stack not yet filled or filled but removed.\n");
	else
	{
 		printf("stck elements:\n");
		int i=0;
		for( i;i<=top;i++)
		{
			printf("%d\n",arrystack[i]);	
		}	
	}
	}

isempty()
	{
//	printf("isempty is called\n");
	if(top==-1)
	{
		printf("stack is empty,we can not do poping.\n");
		return 1;
        }
	else
	{
		return 0;
	} 
	}
int isfull()
{
//printf("isfull is called\n");
if(top==size-1)
{
	printf("stack is full,we can not push further.\n");
 	return 1;
}
else 
	printf("still %d number of elements can b fit.\n",size-top-1);
	return 0;
}

main()
{
while(1)
{
printf("-------MENU------\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.Display the stack\n");
printf("4.isempty??\n");
printf("5.isfull?\n");
printf("Entr ur choice...\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
	case 1:
		push();
		break;
	case 2:
                pop();
		break;
        case 3:
                Display();
		break;
	case 4:
		isempty();
		break;
	case 5: 
  		isfull();
		break;
	default:
		printf("ntr a valid choice.");
		
}
}

}
