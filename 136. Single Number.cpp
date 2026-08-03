class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int x: nums){
            ans ^= x;
        }
        return ans;
    }
};

// The XOR operation has a property that x ^ x = 0 and x ^ 0 = x. Therefore, if we XOR all the numbers in the array, the duplicates will cancel each other out, leaving only the single number. This approach has a time complexity of O(n) and a space complexity of O(1).