class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return \\;

 
      string shortest_str = strs[0];
    for (const string& str : strs) {
        if (str.length() < shortest_str.length()) {
            shortest_str = str;
        }
    }

    for (size_t i = 0; i < shortest_str.length(); ++i) {
        char current_char = shortest_str[i];
        for (const string& str : strs) {
            if (str[i] != current_char) {
               
                return shortest_str.substr(0, i);
            }
        }
    }

    
    return shortest_str;
    }
};