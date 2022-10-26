#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int N;
    struct node *prev;
    struct node *next;
};
struct node *head, *newnode, *c,*p,*tail;

void insert(int data)
{
    int yn=0;
    struct node *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->prev=0;
    newnode->N=1;
    if(head==0)
    {
        head=temp=tail=newnode;
    }

    else
    {
        temp=head;
        while(temp){
            if(temp->data==newnode->data)
            {
                temp->N=temp->N+1;
                yn=1;
                break;
            }
            temp=temp->next;
        }
        if(yn==0){
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;}
    }
}


viewnode()
{
    p=head;
    while(p!=0)
    {
        printf("%d %d\n",p->data,p->N);
        p=p->next;
    }
}

int main()
{
    struct node *newnode;
    int i, a, b, c, n;
    head=0;
    while(scanf("%d",&n)==1)
    {
        insert(n);
    }
    viewnode();

return 0;

}
