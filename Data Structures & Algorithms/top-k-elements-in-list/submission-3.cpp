class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
                ans.push_back({it.first,it.second});
            }
        sort(ans.begin(),ans.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second>b.second;
        });
        
        vector<int> res;
        for(int j=0;j<k;j++){
                res.push_back(ans[j].first);
        }
        return res;
    }
};
