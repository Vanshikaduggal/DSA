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

    int sum1=0,sum2=0;
    int i=0;
    while(i<n)
    {
        sum1+=arr[i][i];
        i++;
    }

    int j =m-1; i=0;
    while(j>=0)
    {
        sum2+=arr[i][j];
        i++;
        j--;
    }

    cout<<sum1<<" "<<sum2;
    return 0;
}
