
#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}
