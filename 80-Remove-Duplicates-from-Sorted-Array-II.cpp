class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = mp[nums[i]] + 1;
        }
        for(int i=0;i<nums.size();i++){
           if(mp[nums[i]]>=2){
            res.push_back(nums[i]);
            res.push_back(nums[i]);
            mp[nums[i]]=0;
           }
           else if(mp[nums[i]]==1) {
            res.push_back(nums[i]);
            mp[nums[i]]=0;
           }
        }
        nums=res;
        return res.size();
    }
};