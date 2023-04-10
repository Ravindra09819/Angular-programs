#include<iostream>
using namespace std;

void merge(int *arr,int start,int end)
{

    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //copy values

    //1st array
    int mainArrayindex=start;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayindex++];
    }
//2nd array
mainArrayindex=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayindex++];
    }

    //merge 2 sorted arrays
    int index1=0;
    int index2=0;
    mainArrayindex=start;

    while(index1<len1&&index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayindex++]==first[index1++];
        }
        else
        {
            arr[mainArrayindex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainArrayindex++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[mainArrayindex++]=second[index2++];
    }
}

void mergesort(int *arr,int start,int end)
{

//base case
if(start>=end)
{
    return;
}
int mid=(start+end)/2;
//left part sort karna h

mergesort(arr,start,mid);


//right part sort karna h

mergesort(arr,start,mid);

//right part sort karna h

mergesort(arr ,mid+1,end);

//merge

merge(arr,start,end);
}

int main()
{
    int arr[6]={12,03,15,98,87,99};
    int n=6 ;
    mergesort(arr,0,n-1);

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
    return 0;
}