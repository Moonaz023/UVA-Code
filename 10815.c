#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	struct root *left;
	struct root *right;
	struct root *parent;
	char data[100];
	int clr;
};
int left_or_right(char word[],char new_word[])
{
    int i,j,k,count,l_or_r=0,len;
    int wlen=strlen(word);
    int nwlen=strlen(new_word);
    if(wlen>nwlen)
        len=nwlen;
    else
        len=wlen;
    for(i=0;i<len;i++)
    {
        if(word[i]!=new_word[i])
        {
            if(word[i]>new_word[i])
                l_or_r=-1;
            if(word[i]<new_word[i])
                l_or_r=1;
            break;
        }

    }
    if(l_or_r==0)
    {
        if(wlen>nwlen)
        l_or_r=-1;
        if(wlen<nwlen)
        l_or_r=1;

    }

return l_or_r;

}

struct node *root,*newnode,*temp,*pvt,*p2,*p,*sp,*spp,*z,*y,*zp,*yp,*zpp,*fao;
void insert(char Data[])
{
    int lr;
    newnode=(struct node*)malloc(sizeof(struct node));
     strcpy(newnode->data,Data);
    newnode->left=0;
    newnode->right=0;
    newnode->parent=0;
    newnode->clr=0;
    p2=0;
    if(root==0)
    {
        root=temp=newnode;
        newnode->clr=1;
    }

    else
    {  temp=root;
        while(temp!=0)
        {
        p2=temp;
         lr=left_or_right(temp->data,Data);

            if(lr==1)
            {
                temp=temp->right;

            }
        if(lr==-1)
            {
                temp=temp->left;

            }
            if(lr==0)
                break;


        }

        if(lr==-1)
        {
            p2->left=newnode;
            newnode->parent=p2;

        }
         if(lr==1)
        {
            p2->right=newnode;
            newnode->parent=p2;
        }
    }

    if(newnode!=root && lr!=0)
    insert_fixup();
}
void left_rotate(struct node* x)
{
    struct node *y,*yl,*xp;
    y=x->right;
    x->right=y->left;
    if(y->left!=0){
        yl=(y->left);
        yl->parent=x;}
    y->parent=x->parent;
    xp=(x->parent);
    if(x->parent==0){
        root=y;
        root->parent=0;}
    else if(x==xp->left)
        xp->left=y;
    else
        xp->right=y;
    y->left=x;
    x->parent=y;
root->clr=1;
}
void right_rotate(struct node* x)
{
    struct node *y,*yr,*xp;
    y=x->left;
    x->left=y->right;
    if(y->right!=0){
        yr=(y->right);
        yr->parent=x;}
    y->parent=x->parent;
    xp=(x->parent);
    if(x->parent==0){
        root=y;
        root->parent=0;}
    else if(x==xp->right)
        xp->right=y;
    else
        xp->left=y;
    y->right=x;
    x->parent=y;
root->clr=1;
}
void insert_fixup()
{
    z=newnode;
    zp=z->parent;
    zpp=zp->parent;
    root->clr=1;
    while(zp->clr==0 && z->clr==0)
    {zpp=zp->parent;
        if(zp==zpp->left)
        {
            y=zpp->right;
            if(y!=0 && y->clr==0)
            {
                zp->clr=1;
                y->clr=1;
                if(zpp!=root)
                {
                    zpp->clr=0;
                    z=zpp;
                    if(z!=root)
                    zp=z->parent;
                }
            }
            else
            {
                if(z==zp->right)
                {
                    left_rotate(zp);
                    zp=z->parent;
                    right_rotate(zp);
                    if(z!=root)
                    zp=z->parent;
                    z->clr=1;
                    fao=z->right;
                    fao->clr=0;
                }
                else
                {
                   right_rotate(zpp);
                   if(z!=root)
                   zp=z->parent;
                    zp->clr=1;
                    fao=zp->right;
                    fao->clr=0;

                }

            }

        }
        else
        {
            y=zpp->left;
            if(y!=0 && y->clr==0)
            {
                zp->clr=1;
                y->clr=1;
                if(zpp!=root)
                {
                    zpp->clr=0;
                    z=zpp;
                    if(z!=root)
                    zp=z->parent;
                    zpp=zp->parent;
                }
            }
            else
            {
                if(z==zp->left)
                {
                    right_rotate(zp);
                    zp=z->parent;
                    zpp=zp->parent;
                    left_rotate(zp);
                    if(z!=root)
                    zp=z->parent;
                    z->clr=1;
                    fao=z->left;
                    fao->clr=0;
                    fao=z->right;
                    root->clr=1;
                }
                else
                {
                   left_rotate(zpp);
                   if(z!=root)
                   zp=z->parent;
                    zp->clr=1;
                    fao=zp->left;
                    fao->clr=0;
                }

            }

        root->clr=1;
        }
        root->clr=1;

    }

}
void print3(struct node* p){
if(p!=0){

    print3(p->left);
    printf("%s\n",p->data);
     print3(p->right);

}
}

int main()
{
    root=0;
    int i,in=0,j,rlen;
    char award,rward[100];
    while(scanf("%c",&award)==1){

                if(award<65 ||(award>90 &&award<97)||award>122)
                    {rward[in++]='\0';
                    if(rward[0]!='\0')
                    insert(rward);
                    in=0;}
                else
                {
                    if(award<97)
                        rward[in++]=award+32;
                    else
                        rward[in++]=award;
                }


    }
    print3(root);
    return 0;
}


