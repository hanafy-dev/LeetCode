class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LONG_MIN; 
        long long second = LONG_MIN;
        long long third = LONG_MIN;
        for (int num : nums) {
            if (num == first || num == second || num == third) {
                continue;
            }
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }
        return third != LONG_MIN ? third : first;
    }
};

// Another approaches is either to sort or to use a set to keep track of the unique numbers. After that, we can check if there are at least three unique numbers and return the third maximum or the maximum accordingly. The time complexity is O(n) and the space complexity is O(1).