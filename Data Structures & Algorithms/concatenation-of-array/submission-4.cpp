class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;

        ans.insert(ans.end(),nums.begin(),nums.end());
        return ans;
    }

// Insert a range from another vector ⭐(Syntax)
// This is the one relevant to your concatenation problem:

// vector.insert(position, other.begin(), other.end());
};