class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> frqs(5e4), frqt(5e4) ;
    
        for(int i=0 ; i < (int) s.size() ; i++){
            frqs[s[i]]++;
        }
        for(int i=0 ; i < (int) t.size() ; i++){
            frqt[t[i]]++;
        }
        
        return (frqt==frqs)?true:false;
        
    }
};