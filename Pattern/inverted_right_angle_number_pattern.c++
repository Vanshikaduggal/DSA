#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start = n*(n+1)/2;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<start--<<" ";
        }
        cout<<endl;
    }
}

10 9 8 7
6 5 4
3 2
1
