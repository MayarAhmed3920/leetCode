class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp; bool f=0;
        for(int i=0;i<(int)nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto k: mp){
            if(k.second > 1) f = 1;
        }
        return (f) ? true : false;
    }
};