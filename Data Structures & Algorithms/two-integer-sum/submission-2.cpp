class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // loop through nums, check for each number
        // for each number loop again
        // check that the number does not equal the num above
        // in the inner loop check that the sum of these two numbers are equal to the target

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target && i != j) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
