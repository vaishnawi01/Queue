
#include <stdio.h>

void enqueue(int);
void dequeue();
void display();

int queue[10];
int front,rear=-1;
int main()
{
	int ch,data;
	do
	{
		printf("Enter your choice:\n 1.Enqueue\n 2.Dequeue\n 3.Display\n");
		scanf("%d",&ch);
		if (ch==1)
		{
			printf("Enter data: ");
			scanf("%d",&data);
			enqueue(data);
		}
		else if (ch==2)
		{
			dequeue();
		}
		else if (ch==3)
		{
			display();
		}
		else
		{
			printf("Invalid choice");
		}
	}while(ch!=0);
}

void enqueue(int data)
{
	if (rear==9)
	{
		printf("Queue Overflow");
		
	}
	else
	{
		rear+=1;
		queue[rear]=data;
		if (front==-1)
		{
			front+=1;
		}
	}
}

void dequeue()
{
	if (front==-1)
	{
		printf("Queue Underflow");
	}
	else
	{
		front+=1;
	}
}

void display()
{
	int i;
	for(i=rear;i>=front;i--)
	{
		printf("\n%d\n",queue[i]);
	}
}
