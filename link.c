// SINGLE LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
} *newnode, *temp,*temp2,*head,*i,*j;
int ch,d,p,f,se,c,s;
void inbeg();
void inpos();
void inend();
void delbeg();
void delpos();
void delend();
void search();
void sort();
void display();
void exit();
int main()
{
	int n=1,m;
	head=0;
	printf("   IMPLEMENTATION OF LINKED LIST \n");
	printf("***********************************\n");
	while(n)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter  data\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if (head==0)
		head=newnode;
		else
		temp->next=newnode;
		temp=newnode;
		printf("Do you continue wants[1/0]:\n");
		scanf("%d",&n);
	}
	do{
		printf("Enter \n 1.Insertion\n 2.Deletion\n 3.Search \n 4.Sort \n 5.Display\n 6.Exit\n");
		printf(" Enter choices:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
				printf("Insertion\n");
				printf("[1.Inbeg]\n[2.Inend]\n[3.Inpos]\n");
				printf("Enter m:");
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
			    break;
		        }
		    case 2:
			{
				printf("Deletion\n");
				printf("[1.Delbeg]\n[2.Delend]\n[3.Delpos]\n");
				printf("Enter  m:");
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
			break;
	     	}
		case 3:
			search();
			break ;
		case 4:
			sort();
			break;
		case 5:
			display();
			break;
		case 6:
			printf("*******\n");
			printf("EXIT \n");
			printf("********\n");
			break;
		default:
			printf("Invalid choices");
    }
	}while(ch!=6);
	return 22;
}
    void inbeg()
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
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
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=head;
		while(temp->next !=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
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
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		d=1;
		printf("Enter the position: ");
		scanf("%d",&p);
		temp=head;
		while(d<p-1)
		{
			temp=temp->next;
			d++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
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
		head=temp->next;
		free(temp);
		temp=head;
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
	void delend()
	{
		temp=head;
		while(temp->next->next!=0)
		temp=temp->next;
		free(temp->next);
		temp->next=0;
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
		temp->next=temp->next->next;
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
		printf("Enter the Search Element:\n");
		scanf("%d",&se);
		temp=head;
		while(temp!=0)
		{
			f=0;
			if(temp->data==se)
			{
				f=1;
				break;
			}
			temp=temp->next;
		}
		if(f==1)
		printf("DataFound\n");
		else
		printf("Data not found\n");	
	}
	void sort()
	{
		for(i=head;i->next!=0;i=i->next)
		for(j=i->next;j!=0;j=j->next)
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
	void display()
	{
		temp=head;
		while(temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
	


