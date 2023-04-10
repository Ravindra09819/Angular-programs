#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node node;
typedef struct node* pnode;
typedef struct node** ppnode;

class doubly
{
    private:
    pnode head;

    public:

    doubly();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();
};

doubly::doubly()
{
    head=NULL;
}

void doubly::InsertFirst(int no)
{
    pnode newn=NULL;
    newn=new node;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(head==NULL)
    {
        head=newn;
    }
    else
    {
        head->prev=newn;
        newn->next=head;
        head=newn;
    }
}

void doubly::InsertLast(int no)
{
    pnode newn=NULL;
    newn=new node;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    pnode temp=NULL;

    if(head==NULL)
    {
        head=newn;
    }
    else
    {
        temp=head;
        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        newn->prev=temp;
        temp->next=newn;
        newn->next=NULL;

    }
}

void doubly::InsertAtPos(int no,int pos)
{
    int size=Count();
    pnode newn=NULL;

    newn->data=no;
    newn=new node;
    newn->prev=NULL;
    newn->next=NULL;

    if((pos<1)||(pos>size+1))
    {
        cout<<"invalid position."<<endl;
        return;
    }

    if(pos==1)
    {
        InsertFirst(no);
    }

    else if(pos==(size+1))
    {
        InsertLast(no);
    }
    else
    {
        pnode temp=NULL;
        temp=head;

        for(int i=1;i<(pos-1);i++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next=newn;
        newn->next->prev=newn;
    }
}

void doubly::DeleteFirst()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        pnode temp=NULL;
        temp=head;
        head=temp->next;
        head->prev=NULL;
        delete(temp);
    }
}

void doubly::DeleteLast()
{
    if(head==NULL)
    {
        delete head;
    }

    else if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        pnode temp=NULL;
        temp=head;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }

        delete temp->next;
        temp->next=NULL;
    }
}

void doubly::DeleteAtPos(int pos)
{
    int size=Count();

    if((pos<1)||(pos>(size+1)))
    {
        cout<<"invalid position"<<endl;        
    }
    else if(pos==1)
    {
        DeleteFirst();
    }
    else if(pos==(size))
    {
        DeleteLast();

    }
    else
    {
        pnode temp=head;
        pnode tempdelete;
        for(int i=1;i<(pos);i++)
        {
            temp=temp->next;
        }
        tempdelete=temp->next;
        temp->next=tempdelete->next;
        tempdelete->next->prev=temp;
        delete tempdelete;
    }
}

void doubly::Display()
{
    if(head==NULL)
    {
        cout<<"linked list is empty."<<endl;
    }
    else
    {
        pnode temp=head;
        while(temp !=NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp=temp->next;
        }
    }
}

int doubly::Count()
{
    int cnt=0;
    if (head==NULL)
    {
        cout<<"linked list is empty."<<endl;

    }
    else
    {
        
        pnode temp=head;
        do{
            cnt++;
            temp=temp->next;
        }
        while (temp->next != NULL);
        return cnt;
    }
}

int main()
{
    int iChoice = 1;
    doubly obj;
    int iValue = 0, ipos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.InsertAtPos(iValue,ipos);
                break;

            case 4:
                obj.DeleteFirst();
               break;

           case 5:
                obj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.DeleteAtPos(ipos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

                default:
                    cout<<"Please enter proper choice\n";
                    break;
        }   // End of switch
    }// End of while

    return 0;
}