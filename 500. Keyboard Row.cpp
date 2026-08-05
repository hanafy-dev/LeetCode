class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> row = {
            {'q',1},{'w',1},{'e',1},{'r',1},{'t',1},
            {'y',1},{'u',1},{'i',1},{'o',1},{'p',1},
            {'a',2},{'s',2},{'d',2},{'f',2},{'g',2},
            {'h',2},{'j',2},{'k',2},{'l',2},
            {'z',3},{'x',3},{'c',3},{'v',3},
            {'b',3},{'n',3},{'m',3}
        };
        vector<string> ans;
        for (const string& word : words) {
            int targetRow = row[tolower(word[0])];
            bool valid = true;
            for (char c : word) {
                if (row[tolower(c)] != targetRow) {
                    valid = false;
                    break;
                }
            }
            if (valid)
                ans.push_back(word);
        }
        return ans;
    }
};

// Using one hash teble to contain the row number of each letter, we can check if all letters of a word belong to the same row. If they do, we add the word to the result list. The time complexity is O(n * m), where n is the number of words and m is the average length of the words.

/*
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".

 

Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]

Output: ["Alaska","Dad"]

Explanation:

Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.

Example 2:

Input: words = ["omk"]

Output: []

Example 3:

Input: words = ["adsdf","sfd"]

Output: ["adsdf","sfd"]

 

Constraints:

1 <= words.length <= 20
1 <= words[i].length <= 100
words[i] consists of English letters (both lowercase and uppercase). 
*/