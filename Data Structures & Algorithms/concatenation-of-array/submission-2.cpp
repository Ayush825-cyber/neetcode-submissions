class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        vector<int> temp = ans;

        ans.insert(ans.end(),temp.begin(),temp.end());

        // for(int i=0; i<nums.size(), i++){
        //     ans[i]=nums[i];
        //     ans = ans.push_back(ans);
        // you're trying to push an entire vector ans into a vector<int>.
        // A vector<int> can only contain ints
        // push_back does not return vector
        // }
        return ans;
    }
// '''
// Insert a range from another vector ⭐(Syntax)
// This is the one relevant to your concatenation problem:

// vector.insert(position, other.begin(), other.end());

// '''
};