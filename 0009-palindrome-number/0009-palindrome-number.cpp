class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes.
        // Numbers ending in 0 are not palindromes, EXCEPT for 0 itself.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        long long reversed = 0;
        int original = x;
        
        while (x > 0) {
            reversed = reversed * 10 + (x % 10);
            x /= 10;
        }
        
        return original == reversed;
    }
};
