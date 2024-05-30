class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() <= 1 || k == 0 || k % nums.size() == 0) {
            return;
        }
        
        k = k % nums.size();
        
        vector<int> res(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            res[(i + k) % nums.size()] = nums[i];
        }
        
        nums = res;
    }
};