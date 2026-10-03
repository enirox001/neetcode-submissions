class Solution {
public:
    bool isAnagram(string s, string t) {
        // a string can be sorted and then checked if they are equal
        sort(s.begin(), s.end());    
        sort(t.begin(), t.end());
        return s == t;    
    }
};