Problem statement
Sam want to read exactly ‘TARGET’ number of pages.

He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 

Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.


string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0;
    int right=n-1;
    sort(book.begin(),book.end());
    while(left<right)
    {
        int sum=book[left]+book[right];
        if(sum==target)
        {
            return "YES";
        }
        else if(sum<target) left++;
        else right--;

    }
    return "NO";
}
