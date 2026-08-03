class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for (int row = 1; row < numRows; row++) {
            const vector<int>& prev = ans.back();
            vector<int> curr;
            curr.push_back(1);
            for (int col = 1; col < prev.size(); col++) {
                curr.push_back(prev[col - 1] + prev[col]);
            }
            curr.push_back(1);
            ans.push_back(curr);
        }
        return ans;
    }
};