class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0; int p2=0;
        string temp;
        while(p1<word1.size() && p2<word2.size()){
            temp.push_back(word1[p1]);
            p1++;
            temp.push_back(word2[p2]);
            p2++;
        }
        while(p1<word1.size()){
            temp.push_back(word1[p1]);
            p1++;
        }
        while(p2<word2.size()){
            temp.push_back(word2[p2]);
            p2++;
        }
        return temp;
    }
};