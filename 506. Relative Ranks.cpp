class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, int> mp;
        vector<string> vec(score.size());
        for(int i = 0; i < score.size(); i++){
            mp[score[i]] = i;
        }
        sort(score.begin(), score.end());
        for(int i = score.size() - 1; i >= 0; i--){
            if(i == score.size() - 1){
                vec[mp[score[i]]] = "Gold Medal";
                continue;
            }
            else if(i == score.size() - 2){
                vec[mp[score[i]]] = "Silver Medal";
                continue;
            }
            else if(i == score.size() - 3){
                vec[mp[score[i]]] = "Bronze Medal";
                continue;
            }
            vec[mp[score[i]]] = to_string(score.size() - i);
        }
        return vec;
    }
};

// This solution uses a hash map to store the original indices of the scores, sorts the scores in ascending order, and then assigns ranks based on their sorted positions. The time complexity is O(n log n) due to the sorting step, where n is the number of athletes.


/*
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.

 

Example 1:

Input: score = [5,4,3,2,1]
Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
Example 2:

Input: score = [10,3,8,9,4]
Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].

 

Constraints:

n == score.length
1 <= n <= 104
0 <= score[i] <= 106
All the values in score are unique.
*/