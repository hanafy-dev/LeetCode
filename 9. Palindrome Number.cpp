class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long reverse = 0;
        int num = x;
        while(num != 0){
            int digit = num%10;
            num /= 10;
            reverse = reverse * 10 + digit;
        }
        return reverse == x;
    }
};

// Another approach is to convert the integer to a string and check if the string is equal to its reverse. The time complexity is O(log10(n)) and the space complexity is O(1) or checking the string in place using two pointers.
