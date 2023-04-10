#include<iostream>
using namespace std;

int main()
{


int n,m;
cout<<"enter number of rows";
cin>>n;
cout<<"enter number of cols";
cin>>m;

int i=1;

while(i<=n)
{
    int j=1;
    while(j<=m)
    {
        //cout<<" "<<i;
        cout<<" "<<j;
        j++;
    }
    cout<<endl;
    i++;
}
}

