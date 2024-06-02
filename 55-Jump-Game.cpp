class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool f=true;
        int mx=0;
        for(int i=0;i<nums.size();i++){
               if(i>mx) {f= false;break;}
                mx=max(mx,i+nums[i]);
                if(mx>=nums.size()-1){f=true;break;}
        }

        return f;
        }
};