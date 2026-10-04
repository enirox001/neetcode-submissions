class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // the way to know if a string belongs to one is to sort it and check
        // so i would sort a string and then use it in a map as a key
        // check a new string in the map, if it exists add it to the list of the map values
        // if it does not exist, add a new sorted string key and then add the value as a new element in the list
        // loop through the elements of the map values (already lists)
        // for each fo the list add them to the global list that will be returned
        // return the list of lists (vector of vectors)

        map<string, vector<string>> anagram;
        vector<vector<string>> anagramRes;
        for (auto str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            if (anagram.find(key) != anagram.end()) {
                anagram[key].push_back(str);
            } else {
                anagram[key] = {str};
            }
        }

        for (auto const& [_, v] : anagram) {
            anagramRes.push_back(v);
        }

        return anagramRes;
    }
};
