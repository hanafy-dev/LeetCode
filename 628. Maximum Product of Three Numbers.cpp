class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int firstL = INT_MIN;
        int secondL = INT_MIN;
        int thirdL = INT_MIN;
        int firstS = INT_MAX;
        int secondS = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > firstL){
                thirdL = secondL;
                secondL = firstL;
                firstL = nums[i];
            }
            else if(nums[i] > secondL){
                thirdL = secondL;
                secondL = nums[i];
            }
            else if(nums[i] > thirdL){
                thirdL = nums[i];
            }
            if(nums[i] < firstS){
                secondS = firstS;
                firstS = nums[i];
            }
            else if(nums[i] < secondS){
                secondS = nums[i];
            }
        }
        int p1 = firstL * secondL * thirdL;
        int p2 = firstS * secondS * firstL;
        return max(p1, p2);
    } 
};

/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
 

Constraints:

3 <= nums.length <= 104
-1000 <= nums[i] <= 1000
*/