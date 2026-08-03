class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        int expected = n * (n + 1) / 2;
        return expected - sum;
    }
};

// The same problem can be solved using the XOR operation. The idea is to XOR all the numbers in the array with the numbers from 0 to n. The missing number will be the result of this XOR operation. This approach has a time complexity of O(n) and a space complexity of O(1).
