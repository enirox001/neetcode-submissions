#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        // split the string characters into a vector of chars
        // sort the strings in the vector strings
        // convert the vectors into a string
        // compare if both of the strings are the same

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
