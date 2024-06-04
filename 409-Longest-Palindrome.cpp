class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool oo=false;
        for(auto k:mp){
            if(k.second%2!=0){ans+=k.second-1;oo=true;}
            else ans+=k.second;
        }
       if(oo) ans+=1;
        return ans;
    }
    
};