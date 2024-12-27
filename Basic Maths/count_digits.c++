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

// We have another method to do count of digits :

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count= (int)(log10(n)+1);
    cout<<count;
    return 0;
}
