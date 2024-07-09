class Solution {
public:
    vector<vector<int>> findDifference (vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int, int> freq1, freq2;

          for(int num : nums1) {
            freq1[num]++;
        }
        
        for(int num : nums2) {
            freq2[num]++;
        }
        vector<int>v1 , v2;
     for(auto & [num, count] : freq1) {
            if(freq2.find(num) == freq2.end()) {
                v1.push_back(num);
            }
        }
        for(auto & [num, count] :freq2){
            if(freq1.find(num)==  freq1.end()){
                v2.push_back(num);
            }
        }
        return {v1,v2};
        
    }
};