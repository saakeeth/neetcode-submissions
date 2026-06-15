class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;

        for(auto i:s){
            mpp[i]++;
        }
        
        for(auto j:t){
            mpp[j]--;
        }
        for(auto i:mpp){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};
