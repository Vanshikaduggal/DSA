
class Solution
{
    public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        
        // Store the count of lowercase and uppercase letters.
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 'a')
            {
                lower[str[i] - 'a']++;
            }
            else
            {
                upper[str[i] - 'A']++;
            }
        }
        
        string sortedLower, sortedUpper;

        // Generate sorted lowercase letters.
        for (int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            while (lower[i])
            {
                sortedLower += c;
                lower[i]--;
            }
        }

        // Generate sorted uppercase letters.
        for (int i = 0; i < 26; i++)
        {
            char c = 'A' + i;
            while (upper[i])
            {
                sortedUpper += c;
                upper[i]--;
            }
        }

        int lowerIndex = 0, upperIndex = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 'a')
            {
                str[i] = sortedLower[lowerIndex++];
            }
            else // If it's an uppercase letter.
            {
                str[i] = sortedUpper[upperIndex++];
            }
        }
        
        return str; 
    }
};


Another approach :

class Solution {
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n) {
        vector<char> lower;
        vector<char> upper;

        // Separate lowercase and uppercase characters
        for (int i = 0; i < n; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                lower.push_back(str[i]);
            } else {
                upper.push_back(str[i]);
            }
        }

        // Sort both vectors
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        // Merge sorted characters back into the original string
        int lowerIdx = 0, upperIdx = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = lower[lowerIdx++];
            } else {
                str[i] = upper[upperIdx++];
            }
        }

        return str;
    }
};

