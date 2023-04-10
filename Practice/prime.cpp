#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number \n";
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            
            cout<<" is not prime number"<<i<<endl;
        
        }
        else
        {
            cout<<" prime number"<<i<<endl;
        }
        i++;
    }
}