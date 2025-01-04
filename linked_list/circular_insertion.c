#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

void traverse(struct node* head)
{
	printf("The element of circular linked list are:\n");
	struct node* ptr=head;
    do{
	printf("%d\n",ptr->data);
	ptr=ptr->next;
	}while(ptr!=head);
}

struct node* insert_at_first(struct node* head,int data)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	ptr->data=data;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
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
	head->data=8;
	head->next=second;
	second->data=3;
	second->next=third;
	third->data=78;
	third->next=fourth;
	fourth->data=89;
	fourth->next=fifth;
	fifth->data=23;
	fifth->next=head;
	traverse(head);
	printf("After inserting data at beginning:\n");
	head=insert_at_first(head,1);
	head=insert_at_first(head,5);
	head=insert_at_first(head,10);
	traverse(head);
	return 0;
}
