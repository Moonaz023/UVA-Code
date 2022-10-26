#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
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
    else{
temp=0;
free(head);
head=0;
}
}

}

void push(char data)
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



int main()
{
    struct node *newnode;
    int i,n,c;
    char s[100001],ch;

    scanf("%d",&n);
    getchar();
   for(c=0;c<n;c++){
        head=0;
    gets(s);
//    if(s[0]=='\0')
//        continue;
    push(s[0]);
    i=1;
 while(s[i]!='\0'){
        if((tail->data=='[' && s[i]==']')||(tail->data=='('&& s[i]==')'))
            pop();
        else
        push(s[i]);

    i++;
   }
if(head==0)
    printf("Yes\n");
else
    printf("No\n");

   }

return 0;

}
