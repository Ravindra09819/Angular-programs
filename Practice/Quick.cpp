#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
    int pivot=arr[start];

    int cnt=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }

    //place pivot at right positon
    int pivotindex=start+cnt;
    swap(arr[pivotindex],arr[start]);
    //left and right walre part sambahl lete hai
    int i=start,j=end;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void Quicksort(int arr[],int start,int end)
{
//base case
if(start>=end)
return;

//partition karnar ate
int p=partition(arr,start,end);

//left part sort kare
Quicksort(arr,start,p-1);

//right wale part sort

Quicksort(arr,p+1,end);
}


int main()
{
    int arr[10]={2,4,6,1,4,11,33,44,990,111};
    int n=10;
    Quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}