#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

int display(struct node* p)
{
	int a=0;
	printf("The data of the linked list are:\n");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
		a++;
	}
	return a;
}

struct node* insert_at_index(struct node* head,int data,int index,int size)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	int i=0;
	if(index<1 || index>size)
	{
		printf("Error! The index of node cannot be greater than the size of list.\n");
	    exit(0);
	}
	while(i!=(index-1))
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	struct node* fourth;
	struct node* fifth;
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	fourth=(struct node*)malloc(sizeof(struct node));
	fifth=(struct node*)malloc(sizeof(struct node));
	
	head->data=2;
	head->next=second;
	second->data=78;
	second->next=third;
	third->data=45;
	third->next=fourth;
	fourth->data=89;
	fourth->next=fifth;
	fifth->data=90;
	fifth->next=NULL;
	
	int size=display(head);
	printf("After inserting data at given index:\n");
	head=insert_at_index(head,111,5,size);
	display(head);
	return 0;
}
