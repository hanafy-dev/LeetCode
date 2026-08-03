class Solution {
public:
    void addRange(vector<string>& ans, vector<int>& nums, int left, int right) {
        if (left == right)
            ans.push_back(to_string(nums[left]));
        else
            ans.push_back(to_string(nums[left]) + "->" + to_string(nums[right]));
    }

    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())
            return {};

        vector<string> ans;
        int start = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                addRange(ans, nums, start, i - 1);
                start = i;
            }
        }

        addRange(ans, nums, start, nums.size() - 1);

        return ans;
    }
};

// The helper function addRange is used to add the range to the answer vector. It checks if the left and right indices are the same, in which case it adds a single number. Otherwise, it adds a range in the format "left->right". The main function summaryRanges iterates through the input vector and identifies ranges of consecutive numbers, calling addRange whenever a break in the sequence is found. Finally, it adds the last range after the loop.