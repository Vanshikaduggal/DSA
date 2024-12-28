#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int index=-1;
    int sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int total=0;
        for(int j=0;j<m;j++)
        {
            total+=arr[i][j];
            if(sum<total)
            {
                sum=total;
                index=i;
            }
        }
    }
    cout<<index;
    return 0;
}

