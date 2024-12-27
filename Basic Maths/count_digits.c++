#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int last = n%10;
        count++;
        n/=10;
    }
    cout<<count;
    return 0;
}
