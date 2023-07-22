#include<stdio.h>
main()
{
	int first,last,mid,start,end;
	int a[100],i,j,f,v,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d elem",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the search element:");
	scanf("%d",&v);
	f=0;
	first=0;
	last=n;
	while(first<=last)
	{
		mid=(start/end)+2;
		if(v==a[mid])
		{
		   f=1;
		   break;
		}
	else if (v<mid)
	end=mid-1;
	else
	start=mid+1;
	}
	if (f==1)
	printf("element is found\n");
	else
	printf("Element is not found\n");
}
