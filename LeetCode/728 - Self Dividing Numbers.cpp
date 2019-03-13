class Solution {
public:
    
    bool isSelfDividing(int num) {
        if (num == 0)
            return false;
        
        int x = num;
        while (x) {
            int cur = x % 10;
            if (cur == 0)
                return false;
            if (num % cur != 0)
                return false;
            x /= 10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i))
                ans.push_back(i);
        }
        return ans;
    }
};