#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,4,3,0,2,1,7,1,4,3,0};
    ///Determining the size of array &
    ///Finding max_element of the given array.
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< "Given Array:"<<endl;
    for(auto x:arr)
    {
        cout<< x<< " ";
    }
    cout<< endl;
    cout<< endl;
    int r=*max_element(arr,arr+n);
    r=r+1;
    ///counter is the new array to find frequency of the element of the given array.
    int counter[r]={0};
    for(int i=0;i<n;i++)
    {
        counter[arr[i]]=counter[arr[i]]+1;
    }
    ///showing result of frequency counting.
    cout<< "Frequency count:"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<counter[i];
    }
    cout<< endl;
    ///summing up the previous and present element of the counter array
    for(int i=1;i<r;i++)
    {
        counter[i]=counter[i-1]+counter[i];
    }
    /// Showing summing up result.
    cout<<endl<< "new count:"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<counter[i]<< " ";
    }
    cout<<endl;
    cout<< endl;
    /// New array to sort.
    int output[n];
    /// main operation.
    for(int j=n-1;j>=0;j--)
    {
       int k=counter[arr[j]]-1;
       counter[arr[j]]=k;
       output[k]=arr[j];
    }
    ///Sowing the sorted array.
    cout<< "Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<< " ";
    }

}
