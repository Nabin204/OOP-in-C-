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

struct abc* delete_at_end(struct abc* head)
{
	struct abc* p=head;
	struct abc* q=head->next;
	while(q->next!=NULL)
	{
	    p=p->next;
	    q=q->next;
	}
	p->next=NULL;
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
	
	head->num=11;
	head->next=second;
	second->num=19;
	second->next=third;
	third->num=20;
	third->next=fourth;
	fourth->num=41;
	fourth->next=fifth;
	fifth->num=43;
	fifth->next=NULL;
	
	transversal(head);
	printf("After deleting node at end:\n");
	head=delete_at_end(head);
	transversal(head);
	return 0;
}
