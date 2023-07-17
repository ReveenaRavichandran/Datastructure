//     BINARY RECURSIVE FUNCTION
#include<stdio.h>
int rbin(int*,int,int,int,int);
main()
{
	int start,end,r;
	int a[100],i,n,val;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d elem",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&val);
	start=0;
	end=n-1;
	r=rbin(a,val,start,end,n);
	if(r<0)
	printf(" Element is not found");
	else
	printf("Element is found");
	return 0;
}
int rbin(int *a,int val,int start,int end,int n)
{
	int mid;
	if(start==end)
	{
		if(a[start]!=val)
		return -1;
	}
	else
	{
		int mid;
		mid=(start+end)/2; 
		if(a[mid]==val)
		return mid;
		else if(val<a[mid])
		rbin(a,val,start,mid-1,n);
		else
		rbin(a,val,mid+1,end,n);
	}
}
