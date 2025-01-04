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
	
	transversal(head);
	return 0;
}
