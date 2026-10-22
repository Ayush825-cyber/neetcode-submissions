class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        for(char c : t){
            freq[c]--;
        }
        for(auto x : freq){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};












// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(), t.end());
//         if(s==t){
//             return true;
//         }
//         return false;
//     }
// };
