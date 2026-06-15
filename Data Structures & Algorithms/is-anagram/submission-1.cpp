class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp1;
        for(auto i:s){
            mpp[i]++;
        }
        for(auto j:t){
            mpp1[j]++;
        }
        if(mpp==mpp1){
            return true;
        }
        return false;
    }
};
