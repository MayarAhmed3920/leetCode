class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
       for(int i=0;i<(int)nums.size()-1;i++) {
        if(nums[i]!=nums[i+1]){
            res.push_back(nums[i]);
        }
       }
       res.push_back(nums[nums.size()-1]);
       nums=res;
       return res.size();
    }
};