Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.



Find the length of the longest subarray of 'a' whose sum is equal to 'k'.



Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]


#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long long,int> preSumMap;
    long long sum=0;
    int len=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
        if(sum == k)
        {
            len=max(len,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end())
        {
            int l=i-preSumMap[rem];
            len=max(len,l);
        }
        if(preSumMap.find(sum)==preSumMap.end())
        {
            preSumMap[sum]=i;
        }
    }
    return len;
}
