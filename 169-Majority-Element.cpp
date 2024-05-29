class Solution {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int>mp;
       int k=nums.size()/2; 
       int ans=0;
       for(int i=0 ; i<nums.size() ; i++) {
          mp[nums[i]]++;
       }
       for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]>k){
            ans=nums[i];
            break;
        }
       }
       return ans;
    }  
};