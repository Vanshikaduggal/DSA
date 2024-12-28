#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // printing in wave form :
    for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}
