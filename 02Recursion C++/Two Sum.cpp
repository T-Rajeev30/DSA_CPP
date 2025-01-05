#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complementMap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (complementMap.find(complement) != complementMap.end()) {
                result.push_back(complementMap[complement]);
                result.push_back(i);
                break;
            }
            
            complementMap[nums[i]] = i;
        }
        
        return result;
    }
};

// Example usage:
#include <iostream>

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);
    if (indices.size() == 2) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
}
