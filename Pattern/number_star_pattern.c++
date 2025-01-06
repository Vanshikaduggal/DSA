#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2 ==1)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<start;
                if(j<i) cout<<"*";
                start++;
            }
        }
        else{
            int temp = start+i;
            for(int j=1;j<=i;j++)
            {
                temp--;
                cout<<temp;
                if(j<i) cout<<"*";
                start++;
            }
        }
        cout<<endl;
    }
}


1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
