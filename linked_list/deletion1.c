#include<stdio.h>
#include<stdlib.h>
struct abc{
	int num;
	struct abc* next;
};
void transversal(struct abc* ptr)
{
	printf("The elements of linked list are:\n");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->num);
		ptr=ptr->next;
	}
}

struct abc* delete_first(struct abc* head)
{
	struct abc* ptr=head;
	head=head->next;
	free(ptr);
	return head;
}

struct abc* delete_at_index(struct abc* head,int index)
{
	struct abc* p=head;
	struct abc* q=head->next;
	int i;
	for(i=0;i<index-1;i++)
	{
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
int main()
{
	struct abc* head;
	struct abc* second;
	struct abc* third;
	struct abc* fourth;
	struct abc* fifth;
	head=(struct abc*)malloc(sizeof(struct abc));
	second=(struct abc*)malloc(sizeof(struct abc));
	third=(struct abc*)malloc(sizeof(struct abc));
	fourth=(struct abc*)malloc(sizeof(struct abc));
	fifth=(struct abc*)malloc(sizeof(struct abc));
	
	head->num=1;
	head->next=second;
	second->num=5;
	second->next=third;
	third->num=67;
	third->next=fourth;
	fourth->num=34;
	fourth->next=fifth;
	fifth->num=20;
	fifth->next=NULL;
	
	printf("The elements of linked list before deletion are:\n");
	transversal(head);
	printf("The elements of linked list after deletion are:\n");
	head=delete_at_index(head,3);
	transversal(head);
	return 0;
}
