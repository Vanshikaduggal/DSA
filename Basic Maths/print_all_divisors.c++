#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

Time Complexity : O(n)
Space Complexity : O(1)


Another method to Print all the divisors

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ls;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ls.push_back(i); // To print 2 from 2*18
            if((n/i) !=i)
            {
                ls.push_back(n/i); // To print 18 form 2*18 
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    return 0;
}
