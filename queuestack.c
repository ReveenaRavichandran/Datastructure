// Time complexity //
 //Enqueue  and dequeue have same time complexity =o(1)
#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node
{
	int data;
	struct node * next;
};
struct node *front ,*rear,*temp;
int main()
{
	int ch;
	printf("       QUEUE USING LINKED LIST  \n   ");
	printf(" ************************************\n ");
	do
	{
	printf("Enter\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
	printf("Enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("**********\n");
			printf(" Exit \n");
			printf("**********\n");
			break;
		default:
			printf("Invalid choice \n");
	}
}while(ch!=4);
return 22;
}
void enqueue()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if( front==0 && rear == 0)
	{
		front = newnode;
		rear= newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if (front ==0 && rear==0)
	printf(" ** Queue is underflow **\n");
	elif(front->next==0)
       {
	printf("%d\n",front->data);
	front=0;
	rear=0;
	}
	else 
	{
		temp=front;
		printf("%d\n",front->data);
		front=front ->next;
		free(temp);
	}
}
void display()
{
	if(front==0 && rear==0)
	printf("** Queue is underflow **\n");
	else
	temp=front;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

