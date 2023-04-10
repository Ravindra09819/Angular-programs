#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*head==NULL)//if ll is empty
    {
        *head=newn;

    }
    else //ll contains atleast one node
    {
        newn->next=*head;
        (*head)->prev=newn;
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
    newn->prev=NULL;

    if(*head==NULL)//if ll is empty
    {
        *head=newn;

    }
    else//ll conatains atleast one node
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;//temp->next->prev=temp;
    }

}


void DeleteFirst(PPNODE head)
{
    if(*head==NULL)//if ll is empty
    {
        return;

    }
    if((*head)->next==NULL)//single node
    {
        free(*head);
        *head=NULL;
    }
    else//more than one node
    {
        *head=(*head)->next;
        free((*head)->prev);
        (*head)->prev=NULL;
    }
}



void DeleteLast(PPNODE head)
{
    PNODE temp=NULL;

    if(*head==NULL)//if ll is empty
    {
        return;
    }

    if((*head)->next==NULL)//single node
    {
        free(*head);
        *head=NULL;
    }

    else//more than one node

{
    temp=*head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    
}
}
void Display(PNODE head)
{
    printf("Data from linked list is\n");
    while(head!=NULL)
    {
        printf("|%d|<=>",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int main()
{
PNODE first=NULL;
InsertFirst(&first,21);
InsertFirst(&first,11);
InsertLast(&first,101);
DeleteFirst(&first);
DeleteLast(&first);
Display(first);
    return 0;

}