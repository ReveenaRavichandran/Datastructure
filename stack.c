#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peep();
void peek();
void display();
struct node
{
	int data;
	struct node*next;
}*newnode ,*head,*temp,*temp2;
int top;
int main()
{
	int ch;
	top=-1;
	printf(" STACK USING LINKED LIST");
	printf("***************************");
	do
	{
		printf("Enter\n 1.Push\n 2.Pop\n 3.Peep\n 4.Peek\n 5.Display\n 6.Exit");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				peek();
				break;
			case 5:
				display();
				break;
			case 6:
				printf(" Exit \n");
				break;
			default:
				printf("Invalid choices\n");
		}
	    }while(ch!=6);
	    return 22;
}
void push()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next =0;
	if(top==-1)
	{
		top++;
		head=newnode;
		printf("Element is pushed");
	}
	else
	{
		top++;
		temp=head;
		while(temp->next!=0)
		temp=temp->next;
		temp->next=newnode;
		printf("Element is pushed");
	}
}
void pop()
{
	if(top>=0)
	{
	temp=head;    
	while(temp->next->next!=0)
	{
	temp=temp->next;
	temp2=temp->next;
	temp->next=0;
	printf("the poped element %d is ",temp2->data);
}
}
	else
	printf("stack is invalid");
}
void peep()
{
	int d=0,p;
	printf("Enter the position");
	scanf("%d",&p);
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	printf("the peeped the element %d\n",temp->data);	
}
void peek()
{
	if (top>=0)
	{
		temp=head;
		while(temp->next!=0)
		temp=temp->next;
		printf("peek element is %d \n",temp->data);
	}
	else
	printf("stack is invalid");
}
void display()
{
	if(top>=0)
	{
		temp=head;
		while(temp!=0);
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
	else
	printf("stack is invalid");
}
