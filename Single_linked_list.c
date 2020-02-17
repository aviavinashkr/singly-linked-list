#include <stdio.h>
struct node{
    
    int data;
    struct node *link;
};

int main() {
	// your code goes here
struct node *head,*n1,*n2;
head= NULL;
n1=(struct node*)malloc(sizeof(struct node));
int a;
scanf("%d",&a);
n1->data=a;
n1->link=NULL;
 
n2=(struct node*)malloc(sizeof(struct node));

int b;
scanf("%d",&b);
n2->data=b;
n2->link=NULL;

head=n1;
n1->link=n2;

printf("%d",n1->data);
printf("%d",n2->data);

return 0;

}

