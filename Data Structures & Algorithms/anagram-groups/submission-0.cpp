#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // keep a map of the strings
        // each map will reference a list of strings
        // the key will be a sorted map
        // loop through the vector
        // if the sorted strimg, matches the key add the string to the vector
        // if not add the new key and add the vector
        // loop through the map and return the list of the vector lists

        map<string, vector<string>> mapObj;

        vector<vector<string>> sortedVec;

        for (auto str : strs) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            if (mapObj.contains(sorted_str)) {
                mapObj[sorted_str].push_back(str);
            } else {
                mapObj[sorted_str] = {str};
            }
        }

        for (auto [key, vec] : mapObj) {
            sortedVec.push_back(vec);
        }
        
        return sortedVec;
    }
};
