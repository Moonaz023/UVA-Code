#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *newnode, *temp,*c,*p,*bef,*aft,*tail,*newhead;
void pop(){
if(head!=0){
    if(tail->prev!=0){
temp=tail->prev;
temp->next=0;
free(tail);
tail=temp;
}
else if(tail->prev==0){
temp=0;
free(tail);
tail=temp;
head=0;
}
}
}

void push(int data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=temp=tail=newnode;
    }

    else
    {
        temp->next=newnode;
        newnode->prev=temp;

        temp=temp->next;
    }
    tail=newnode;
}
viewnode()
{
    p=head;
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    struct node *newnode;
    int i,n,x,b[1001],a,t[1001],j;
    while(1){
    head=0;
    scanf("%d",&n);
    if(n==0)
        break;
    while(1){
    for(i=0;i<n;i++){
        scanf("%d",&a);
        b[i]=a;
        if(i==0 && a==0)
            break;
        }
        if(i==0 && a==0){
                printf("\n");
            break;}
        for(i=0;i<n;i++){
        t[i]=i+1;
        }
        j=0;
        head=0;
        for(i=0;i<n;i++){
           x=t[i];
         push(x);

        if(b[j]==tail->data)
            {
            while(1){
                if(tail==0)
                break;
                    if(tail->data!=b[j])
                    break;
                pop();
                j++;

                }
            }

        }

    if(head==0)
        printf("Yes\n");
    else{
        for(i=j;i<n;i++)
          if(b[j]==tail->data){
            pop();
            j++;}
    if(head==0)
        printf("Yes\n");
        else
        printf("No\n");}
}
}
return 0;
}
