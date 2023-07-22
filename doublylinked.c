#include<stdio.h>
#include<stdlib.h>
struct node
{
 	int data;
 	struct node *prev;
 	struct node *next;
}*newnode,*temp,*head,*tail,*temp2,*i,*j,*c;
 int ch,d,p,v,f;
 void inbeg();
 void inend();
 void inpos();
 void delbeg();
 void delend();
 void delpos();
 void search();
 void sort();
 void reverse();
 void display();
 int main()
 {
 	int n=1,m;
 	head=0;
 	printf(" DOUBLY LINKED LIST \n");
 	printf("**************************");
 	while(n)
 	{
 		newnode=(struct node*)malloc(sizeof(struct node));
 		printf("Enter data:\n");
 		scanf("%d",&newnode->data);
 		newnode->next=0;
 		newnode->prev=0;
 		if(head==0)
 		{
 			head=newnode;
 			tail=newnode;
		}
		else
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	 }
	 printf("Do you wish to continue[1/0]:\n");
	 scanf("%d",&n);
    }
 do
	{
	printf("1.insertion\n 2.deletion\n 3.search\n 4.sort\n 5.reverse\n 6.Display\n 7.Exit\n");
	printf("Enter choice\n ");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1:
 			{
 				printf("Insertion\n");
 				printf("1.inbeg\n 2.inend\n 3.inpos\n");
 				printf("Enter m\n");
 				scanf("%d",&m);
 				switch(m)
 				{
 					case 1:
 						inbeg();
 						break;
 					case 2:
 						inend();
 						break;
 					case 3:
 						inpos();
 						break;
 			    }
 		case 2:
 			{
 				printf("Deletion\n");
 				printf("1.delbeg\n 2.delend\n 3.delpos\n");
 				printf("Enter m\n ");
 				scanf("%d",&m);
 				switch(m)
 				{
 					case 1:
 						delbeg();
 						break;
 					case 2:
 						delend();
 						break;
 					case 3:
 						delpos();
 						break;
				}
			}
			case 3:
				search();
				break;
			case 4:
				sort();
				break;
			case 5:
				display();
				break;
			case 6:
				printf("exit\n");
				break;
			default :
				printf("invalid choices");
	    }
      }while(ch!=6);
 return 0;
}
void inbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}	 
}
void inend()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void inpos()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	printf("enter position:");
	scanf("%d",&p);
	d=1;
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	temp2=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
	newnode->next=temp2;
	temp2->prev=newnode;
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delbeg()
{
	temp=head;
	head=head->next;
	head->prev=0;
	free(temp);
	
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delend()
{
	temp=tail;
	temp->prev->next=0;
	tail-tail->prev;
	free(temp);
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void delpos()
{
	d=1;
	printf("Enter position\n");
	scanf("%d",&p);
	temp=head;
	while(d<p-1)
	{
		temp=temp->next;
		d++;
	}
	temp2=temp->next;
	temp2->next=temp2->next;
	temp->next=temp2->next;
	free(temp2);
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void search()
{
	int f=0,v;
	printf("enter search element:");
	scanf("%d",&v);
	temp=head;
	while(temp!=0)
	if(temp->data==v)
	{
		f=1;
		break;
	}
	if(f==1)
	printf("data is found\n");
	else
	printf("data is not found\n");
}
void sort()
{
	for(i=head;i->next!=0;i=i->next)
	for(j=i->next;j!=0;j=j->next)
	if (i->data>j->data)
	{
		c=i->data;
		i->data=j->data;
		j->data=c;
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
