class Solution {
public:
    string add(string num1, string num2) {
        int carry = 0;
        string ans;
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;

        // Add digits from both numbers until one of them is exhausted
        while (index2 >= 0) {
            int sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0'; // Append the last digit of the sum
            index1--;
            index2--;
        }

        // Add remaining digits from num1 (if any)
        while (index1 >= 0) {
            int sum = (num1[index1] - '0') + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0'; // Append the last digit of the sum
            index1--;
        }

        // If there's a carry left, add it to the result
        if (carry) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        // Ensure the first number is the longer one
        if (num1.size() < num2.size()) {
            return add(num2, num1);
        } else {
            return add(num1, num2);
        }
    }
};
