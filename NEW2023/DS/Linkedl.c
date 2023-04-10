#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
     int data;
    struct node *next;

};
  typedef struct node NODE;
  typedef struct node * PNODE;
  typedef struct node ** PPNODE;

  
 /*
 Allocate memory for node;
 initialise the node;
 check whether ll is empty or not;
 if ll is empty  the new node is first node;
 if ll contains atleast one node in it then store the address 
 of previous first node in the next pointer of new node;
update the first pointer through head;
 */

void Insertfirst(PPNODE head,int ino)
{
    PNODE newn =  NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    newn->data=ino;
    newn->next=NULL;

    if(*head==NULL)//if ll is empty
    {
        *head=newn;

    }
    else//if ll contains atleast one node
    {
        newn->next=*head;
        *head=newn;

    }

}

/*
allocate memory for node(dynamically);
initialise the node;
check whether ll is empty or  not;
if ll is empty then new node is the first node
so update its address in first pointer through head;
if ll is empty or not then;
travel till last node of ll;
store the address of newn node in the next pointer of last node;

*/
void Insertlast(PPNODE head ,int ino)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=ino;
    newn->next=NULL;
    if(*head==NULL)//ll is empty
    {
        *head=newn;
    }
    else//ll contains atleast one node travel till last node store address 
    //of new node in the pointer of last node
    {
         temp=*head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newn;
    }
    
}

/*
if ll is empty then return;
if ll contains atleast one node then;
store the address of  second node in the first pointer through head;
and delete the first node;
*/

void Deletefirst(PPNODE head)
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

/*
if ll is empty then return;
if ll contains one node then delete the node and return;
if ll contains more than one node then travel till second last node 
and delete last node;
*/
void Deletelast(PPNODE head)
{
    PNODE temp =NULL;
    if(*head==NULL)//ll is empty
    {
        return;
    }
    else if((*head)->next==NULL)//ll contains one node
    {
        free(*head);
        *head=NULL;
    }
    else//ll contains more than one node
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

/*
consider no of nodes are 4;
if position is invalid then return directly(<1 or >5);
if position is 1 then call insertfirst;
if position is n+1 then call insertlast;

*/
void InsertAtpos(PPNODE head,int ino,int pos)
{
    int size =0,icnt=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    size=Count(*head);
    if((pos<1)||pos>(size+1))
    {
        printf("Position is invalis\n");
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
        newn = NULL;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=ino;
        newn->next=NULL;

        temp=*head;
        for(icnt =1;icnt<pos-1;icnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }

}

/*
consider no of nodes are 4;
if position is invalid return directly (1< OR >4);
if position is 1 then call deletefirst;
if position is N then call deletelast(posiition is 4);
*/

void  DeleteAtpos(PPNODE head,int pos)
{
    int size=0,icnt=0;
    PNODE temp=NULL;
    PNODE tempdelete=NULL;
    size=Count(*head);

    if((pos<1)||pos>(size))
    {
        printf("position is invalid:\n");
        return;
    }
    if((pos==1))
    {
        Deletefirst(head);
    }
    else if(pos==(size))
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
        tempdelete = temp->next;
        temp->next=temp->next->next;
        free(tempdelete);
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
 void Display(PNODE head)
    {
        printf("\n");
         printf("Elements from linked list are : \n");
       
        while (head!=NULL)
        {
            /* code */
           printf("| %d |-> ",head->data);
            head=head->next;

        }
        printf("\n");
        
    }
    
int main()
{
    PNODE first=NULL;//struct node * first=Null;
    int iret=0;
    Insertfirst(&first,101);
    Insertfirst(&first,51);
    Insertfirst(&first,21);
    Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);

    Insertlast(&first,11);
     Insertlast(&first,12);
      Insertlast(&first,13);
       Insertlast(&first,14);
       Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);
   

  
   Deletefirst(&first);
   Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);
   

    Deletelast(&first);
   Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);

     InsertAtpos(&first,74,3);
   Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);
   
   DeleteAtpos(&first,3);
   Display(first);
    iret=Count(first);
    printf("Number of nodes are: %d",iret);

}
 