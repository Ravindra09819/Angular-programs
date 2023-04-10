#include<iostream>
using namespace std;

class Arithematic
{
    public:

    int iNo1;

    int iNo2;


Arithematic()//default
{
    cout<<"inside default constructor\n";
    iNo1=0;
    iNo2=0;
}

Arithematic(int A,int B)
{
    cout<<"inside parameterrised constructor\n";
    iNo1=A;
    iNo2=B;
}


~Arithematic()
{
    cout<<"inside destructor\n";
}

int Addition()
{
    int Ans=0;
    Ans=iNo1+iNo2;
    return Ans;
}

int subtraction()
{
    int Ans=0;
    Ans=iNo1-iNo2;
  
    return Ans;
}

int multiplication()
{
    int Ans=0;
    Ans=iNo1*iNo2;
  
    return Ans;
}

int division()
{
    int Ans=0;
    Ans=iNo1/iNo2;
  
    return Ans;
}
};

int main()
{

  int iValue1=0;
int  iValue2=0,iRet=0;

cout<<"Enter the first number\n";
cin>>iValue1;

cout<<"Enter the second number\n";
cin>>iValue2;


Arithematic obj1;
Arithematic obj2(iValue1,iValue2);

iRet=obj2.Addition();
cout<<"Addition is:"<<iRet<<"\n";


iRet=obj2.subtraction();
cout<<"subtraction is:"<<iRet<<"\n";

iRet=obj2.multiplication();
cout<<"mul is:"<<iRet<<"\n";

iRet=obj2.division();
cout<<"div is:"<<iRet<<"\n";

return 0;


}

