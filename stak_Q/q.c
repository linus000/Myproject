#include<stdio.h>
int size=6;
int arryq[6];
int front =0;
int rear =-1;
int count=0;
push()
{
	if(!isfull())
	{
		printf("Ntr the q element\n");
                rear=rear+1;
		scanf("%d",&arryq[rear]);
	}
}
pop()
{
	if(!isempty())
	{
		peek();
		movedaq();
		count+=1;
		rear-=1;
	}
	
}
movedaq()
{
	int i=front;
	for(i;i<rear;i++)
		arryq[i]=arryq[i+1];
}
int sizof()
{
	printf("size of Q:%d\n",rear+1);
//	return rear+1;
}
isfull()
{
	if(rear==size-1)
	{
		printf("Q is full.\n");
		return 1;
	}
	else 	
	{
		printf("No ,Q is not full\n");
		return 0;
	}
}
isempty()
{
	if(rear==-1)
    	{
  		printf("Q not yet started or already served cpmpletely..\n ");
		return 1;
  	}
	else 
	{
		printf("NO,Q is not empty.\n");
		return 0;
	}
}
peek()
{
	printf("serving is done for ...%d\n",arryq[front]);

}
Display()
{
	int i=front;
	for(i;i<=rear;i++)
		printf("%d ",arryq[i]);
	printf("\n");
}
main()
{
while(1)
{
	printf("------MENU-------\n");
	printf("1.push\n");
	printf("2.pop\n");	
	printf("3.sizeof\n");
	printf("4.isfull?\n");
	printf("5.isempty?\n");
	printf("6.peek\n");
	printf("7.Show me the Quee\n");
	printf("8.exit\n");
	printf("Ntr ur choice:");
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
			sizof();
			break;
		case 4:
			isfull();
			break;	
		case 5:
			isempty();
			break;
		case 6:
			peek();
			break;
		case 7:
			Display();
			break;
		case 8:
			exit(0);
			break;
		default :
			printf("HElp ur self with a valid choice..\n");
	}
}
}

