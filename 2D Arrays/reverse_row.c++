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

    for(int i=0;i<n;i++)
    {
        int start=0;int end=m-1;
        while(start<end)
        {
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
