class Solution {
public:
    string chars[8] = {
        {"abc"},
        {"def"},
        {"ghi"},
        {"jkl"},
        {"mno"},
        {"pqrs"},
        {"tuv"},
        {"wxyz"}
    };
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0)
            return {};
        string foo = digits.substr(1, digits.length() - 1);
        vector<string> bar = letterCombinations(foo);
        vector<string> ret;
        
        char first = digits[0];
        string curString = chars[first - '0' - 2];
        
        for (int i = 0; i < curString.length(); i++) {
            string c = curString.substr(i, 1);
            if (bar.size() == 0) {
                ret.push_back(c);
            }
            for (auto s: bar) {
                string conString = c + s;
                ret.push_back(conString);
            }
        }
        return ret;
    }
};