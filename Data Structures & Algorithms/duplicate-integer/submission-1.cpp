class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // for(int i=0; i < nums.size()-1; i++){
        for(int i=0; i + 1 < nums.size(); i++){
            if(nums[i]==nums[i+1]){
                return true;
                break;
            }
        }
        return false;
    }
};