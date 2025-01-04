#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void display(struct node* p)
{
	printf("The data of the linked list are:\n");
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

struct node* insert_at_beginning(struct node* t,int num)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=num;
	ptr->next=t;
	return ptr;
}

struct node* insert_at_end(struct node* head,int num)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=num;
	struct node* p=head;
    while(p->next!=NULL)
    {
    	p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
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
	
	display(head);
//	printf("After inserting data at beginning:\n");
//	head=insert_at_beginning(head,12);
//	display(head);
	head=insert_at_end(head,121);
	printf("After inserting data at end:\n");
	display(head);
	return 0;
}
