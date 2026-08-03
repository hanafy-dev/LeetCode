class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }
        unordered_map<int, int> freq;
        for (int x : nums1) {
            freq[x]++;
        }
        vector<int> ans;
        for (int x : nums2) {
            auto it = freq.find(x);
            if (it != freq.end() && it->second > 0) {
                ans.push_back(x);
                it->second--;
            }
        }
        return ans;
    }
};

// The first condition makes sure that we create a hashmap of the smaller array, which reduces the space complexity. The second loop iterates through the larger array and checks if each element is present in the hashmap. If it is, we add it to the result and decrement its count in the hashmap. This approach has a time complexity of O(n + m) and a space complexity of O(min(n, m)), where n and m are the lengths of the two arrays.