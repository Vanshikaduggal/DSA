#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

bool divide(vector<int> arr)
{
    int maxi=INT_MIN,prefix=0,total_sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        total_sum+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        if(total_sum==2*prefix)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Enter vector element: ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<divide(v);
}
