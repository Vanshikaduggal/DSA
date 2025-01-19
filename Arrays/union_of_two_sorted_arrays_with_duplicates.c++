class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the unionArr of the two arrays.
    vector<int> findUnionArr(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        int i = 0, j = 0;
        vector<int> unionArr;

        // Traverse both arrays
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (unionArr.empty() || unionArr.back() != a[i]) {
                    unionArr.push_back(a[i]);
                }
                i++;
            } else {
                if (unionArr.empty() || unionArr.back() != b[j]) {
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }

        // Add remaining elements from array a
        while (i < n1) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }

        // Add remaining elements from array b
        while (j < n2) {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }

        return unionArr;
    }
};
