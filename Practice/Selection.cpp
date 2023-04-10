#include<iostream>
using namespace std;
void  Selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            minindex=j;
        }
       arr[minindex]=arr[i];
       cout<<"index of 11 :"<<arr[minindex]<<endl;
    }
    
}

int main()
{

int even[6]={2,14,6,8,12,18};
    int odd[5]={3,81,11,14,16};
   //int index=binarysearch(even,6,2);
    Selectionsort(even,4);
    //int index=binarysearch(even,6,18);
    //cout<<"index of 11 :"<<index<<endl;
    return 0;

}