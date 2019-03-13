class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        
        for (int i = 0; i < numbers.size(); i++) {
            int cur = numbers[i];
            int comp = target - cur;
            
            if (m.find(comp) != m.end()) {
                vector<int> result = {m[comp], i + 1};
                return result;
            }
            m[cur] = i + 1;
        }
        vector<int> empty;
        return empty;
    }
};