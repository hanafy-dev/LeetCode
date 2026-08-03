    class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int pointValue;
            int pointAccepted = 0; 
            for(int pointValue = 0; pointValue < nums.size(); pointValue++){
                if(nums[pointValue] == val){
                    continue; 
                }
                else{
                    nums[pointAccepted] = nums[pointValue];
                    ++pointAccepted;
                }
            }
            return pointAccepted;
        }
    };

    // 2P pattern