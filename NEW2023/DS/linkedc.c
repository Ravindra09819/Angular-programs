#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;   
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insertfirst(PPNODE head,int ino)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=ino;
    newn->next=NULL;
    newn->prev=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        (*head)->prev=newn;
        *head=newn;
    }

}

void Insertlast(PPNODE head,int ino)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=ino;
    newn->next=NULL;
    newn->prev=NULL;

    if(*head==NULL)
    {
        *head=newn;

    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newn;
        newn->prev=temp;
    }
}

void Deletefirst(PPNODE head)
{
    if(*head==NULL)
    {
        return;
    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else{
        *head=(*head)->next;
        free((*head)->prev);
        (*head)->prev=NULL;
    }
}

void Deletelast(PPNODE head)
{
    PNODE temp=NULL;

    if(*head==NULL)
    {
        return;
    }
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
    while(temp->next->next!=NULL)
        {

            temp=temp->next;
        
        }
        free(temp->next);
        temp->next=NULL;
        
    }
}

void InsertAtpos(PPNODE head,int ino,int pos)
{
    PNODE temp=NULL;
    PNODE newn=NULL;
    int size=0,icnt=0;
    size=Count(*head);
    if((pos<1)||(pos>(size+1)))
    {
        printf("invalid position\n");
        return;
    }
    if(pos==1)
    {
        Insertfirst(head,ino);
    }
    else if(pos==(size+1))
    {
        Insertlast(head,ino);

    }
    else
    {
        temp=*head;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=ino;
        newn->next=NULL;
        newn->prev=NULL;
        for(icnt=1;icnt<(pos-1);icnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        newn->prev=temp;
    }
}


void DeleteAtpos(PPNODE head,int pos)
{
    PNODE temp=NULL;
    int size=0,icnt=0;
    size=Count(*head);

    if((pos<1)||(pos>size))
    {
        printf("Invalid position\n");
        return;

    }
    if(pos==1)
    {
        Deletefirst(head);
    }
    else if(pos==size)
    {
        Deletelast(head);
    }
    else
    {
        temp=*head;
        for(icnt=1;icnt<pos-1;icnt++)
        {
            temp=temp->next;

        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}
int Count(PNODE head)
{
    int icnt=0;
    while (head!=NULL)

    {
        /* code */
        icnt++;
        head=head->next;
    }
    return icnt;
}




void Display(PNODE head)
{
    printf("data from linked list is:\n");
    while (head!=NULL)
    {
        /* code */
        printf("|%d|<=>",head->data);
        head=head->next;
    }
    printf("NULL \n");
    
}

int main()
{
    PNODE first=NULL;
    int iret=0;
    Insertfirst(&first,21);
     Insertfirst(&first,51);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);

     Insertlast(&first,211);
     Insertlast(&first,511);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);

     
     Deletefirst(&first);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);

     Deletelast(&first);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);

      InsertAtpos(&first,54,3);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);

     DeleteAtpos(&first,3);
     Display(first);
     iret=Count(first);
     printf("Number of nodes are: %d\n",iret);
}