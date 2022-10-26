#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *prev;
    struct node *next;
};
struct node *head, *newnode, *temp,*c,*p,*bef,*aft,*temp1,*temp2,*tail,*newhead;

viewnode()
{
    p=head;
    while(p!=0)
    {
        printf("%c",p->data);
        p=p->next;
    }
    p=head;
}
void inst(char data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=temp1=temp=newnode;
    }

    else
    {   if(temp1->next!=0){
        temp2=temp1->next;
        newnode->prev=temp1;
        newnode->next=temp1->next;
        temp1->next=newnode;
        temp2->prev=newnode;
        temp1=temp1->next;}
        else{
               temp1->next=newnode;
               newnode->prev=temp1;
               temp=newnode;
               temp1=temp;
            }
    }
}

int main()
{
    struct node *newnode;
    int i;
    char s[100001],ch;


    while(gets(s)){
         head=0;
    temp=temp1=head;
inst('x');
i=0;
   while(s[i]!='\0'){
        if(s[i]=='[')
            temp1=head;
        else if(s[i]==']')
            temp1=temp;
        else
        inst(s[i]);

    i++;
   }
   newhead=head->next;
           free(head);
           head=newhead;

    viewnode();
 printf("\n");
    }


    return 0;
}

