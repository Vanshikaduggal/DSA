#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j; // FIND THE SAMLLEST ELEMENT FROM THE ARRAY
            }
        }
        swap(arr[index],arr[i]); // SWAP THE ELEMENTS 
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
