There is an integer array ‘a’ of size ‘n’.



An element is called a Superior Element if it is greater than all the elements present to its right.



You must return an array all Superior Elements in the array ‘a’.



Note:

The last element of the array is always a Superior Element. 


Example

Input: a = [1, 2, 3, 2], n = 4

Output: 2 3

Explanation: 
a[ 2 ] = 3 is greater than a[ 3 ]. Hence it is a Superior Element. 
a[ 3 ] = 2 is the last element. Hence it is a Superior Element.
The final answer is in sorted order.


vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int maxi=INT_MIN;
    vector<int> ans;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
