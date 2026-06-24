class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<pair<int,int>>vec;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),[](const pair<int,int>&a, const pair<int,int>&b ){
            return a.second>b.second;
        });
        for(int j=0;j<k;j++){
           res.push_back(vec[j].first);
        }
        return res;
    }

};
