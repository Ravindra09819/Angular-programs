#include<stdio.h>
#include<stdlib.h>

struct node//struture declaration
{
    int data;
    struct node * next;
};

typedef struct node  NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insertfirst(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)//if ll is empty
    {
        *head=newn;

    }
    else//if ll cotaint atleast one node
    {
        newn->next=*head;
        *head=newn;

    }

}


void InsertLast(PPNODE head,int no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)//ll is empty
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
    }
}


void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    if(*head==NULL)//ll is empty
    {
        return;

    }
    else//ll is at least one node
    {
        temp=*head;
        *head=temp->next;
        free(temp);
    }
}



void DeleteLast(PPNODE head)
{
    PNODE temp=NULL;
    if(*head==NULL)//ll is empty
    {
        return;
    }
    else if((*head)->next==NULL)//ll contains one node
    {
        free(*head);
    }

    else//contains more than one node
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



int Count(PNODE head)
{
    int icnt=0;
    while(head!=NULL)
    {
        icnt++;
        head=head->next;
    }
    return icnt;
}


void InsertAtpos(PPNODE head,int no,int pos)
{
    int size=0,icnt=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    size=Count(*head);

    if((pos<1)||(pos>(size+1)))
    {
        printf("position is invalid\n");
        return;

    }
    if(pos==1)
    {
        Insertfirst(head,no);
    }

    else if(pos==(size+1))
    {
        InsertLast(head,no);

    }

    else if(pos==(size+1))
    {
        InsertLast(head,no);
    }
    else
    {
        newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        temp=*head;

        for(int iCnt=1;icnt<pos-1;icnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}



void DeleteAtpos(PPNODE head,int pos)
{

    int size=0,icnt=0;
    PNODE temp=NULL;
    PNODE tempdelete=NULL;
    size=Count(*head);

    if((pos<1)||(pos>(size)))
    {
        printf("position is invalid\n");
        return;
    }
    if(pos==1)
    {
        DeleteFirst(head);
    }
    else if(pos==(size))
    {
       DeleteLast(head);
    }
    else
    {
        temp=*head;
        for(int icnt=1;icnt<pos-1;icnt++)
        {
            temp=temp->next;
        }
        tempdelete=temp->next;
        temp->next=temp->next->next;
        free(tempdelete);

    }

}
void Display(PNODE head)
{
   printf("Element from linked list are:\n");
   while(head!=NULL)
   {
       printf("|%d|->",head->data);
       head=head->next;
   }
   printf("NULL\n");

}
int main()
{
    PNODE first=NULL;
    Insertfirst(&first,101);
    Insertfirst(&first,51);

    InsertLast(&first,01);
    InsertLast(&first,02);
    DeleteFirst(&first);
    DeleteLast(&first);

    InsertAtpos(&first,75,3);
    DeleteAtpos(&first,1);
    Display(first);
    return 0;
}