#include<iostream>
using namespace std;

void Callvalue(int no)
{
    no++;

}


void CallAdress(int *p)
{
    (*p)++;
}

void CallReference(int &ref)
{
    ref++;
}

int main()
{
    int a=10,b=10,c=10;
    Callvalue(a);
    cout<<a<<"\n";

    CallAdress(&b);
    cout<<b<<"\n";

    CallReference(c);
    cout<<c<<"\n";

    return 0;
}
