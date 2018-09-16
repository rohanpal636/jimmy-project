#include<stdio.h>
#include<stdlib.h>
main()
{ 
struct Node
{
	int data;
	struct Node*next;
};
	int i,t,n,x;
	struct Node *start,*p,*q;
	start =(struct Node*)malloc(sizeof (struct Node*));
	q=start;
	while(1)
	{
		printf("enter 1 to create link list");
		scanf("%d",&t);
		if(t!=1)
		break;
		else
		{
	       p=(struct Node*)malloc(sizeof (struct Node*));
	       printf("enter the number of nodes");
	       scanf("%d",&x);
	      while(i<=x){
	       printf("enter data");
	       scanf("%d",&n);
	       i++;  
	}
	       q->next=p;
	       p->data=n;
	       q=q->next;
		}
	}
	q->next=NULL;
		q=start->next;
	while(q->next!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
	printf("%d",q->data);
}	

