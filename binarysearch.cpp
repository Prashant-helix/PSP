#include<iostream>
using namespace std;
/*int binarysearch(int arr[],int n,int key)   // to implement binary search elements of array must be in sorted form.
{
    int p=n/2;
    if(arr[p]>key)
    {
        for(int i=p;i<=0;i--)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
    }
    else if(arr[p]<key)
    {
        for(int i=p;i<n;i++)
        {
            if(arr[i]==key)
            {
                return i;
            }
        }
    }
    else if(arr[p]==key)
    {
        return p;
    }
    return -1;  
}*/
int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n;
    while(start<=n)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<endl;
    cout<<binarysearch(arr,n,key);   // to implement binary search elements of array must be in sorted form.
    return 0;
}