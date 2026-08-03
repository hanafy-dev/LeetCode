class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int read; 
        int write = 0; 
        for(read = 0; read < nums.size(); read++){
            if(nums[read] == nums[write]){
                continue;
            }
            else{
                ++write;
                nums[write] = nums[read];
            }
        }
        return write + 1;
    }
};

// 2P pattern