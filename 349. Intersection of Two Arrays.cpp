class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int x : nums2) {
            if (seen.find(x) != seen.end()) {
                ans.push_back(x);
                seen.erase(x);
            }
        }
        return ans;
    }
};

// A brillinat point is that we can use a set to store the elements of the first array, and then iterate through the second array to check if each element is in the set. If it is, we add it to the result and remove it from the set to avoid duplicates. This approach has a time complexity of O(n + m), where n and m are the lengths of the two arrays.