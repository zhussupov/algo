class Solution {
public:
    
    vector<int> toVectorReversed(string &s) {
        vector<int> ret;
        int len = s.length();
        for (int i = len - 1; i >= 0; i--) 
            ret.push_back((int)(s[i] - '0'));
        return ret;
    }
    
    vector<int> sum(vector<int> &a, vector<int> &b) {
        int lena = a.size(), lenb = b.size();
        int mx = max(lena, lenb);
        vector<int> res (mx, 0);
        int foo = 0;
        for (int i = 0; i < mx; i++) {
            int l = i < a.size() ? a[i] : 0;
            int r = i < b.size() ? b[i] : 0;
            int cur = (l + r + foo);
            res[i] = cur % 2;
            foo = cur / 2;
        }
        if (foo)
            res.push_back(foo);
        return res;
    }
    
    string toString(vector<int> &v) {
        string ret = "";
        for (int i = v.size() - 1; i >= 0; i--)
            ret += (char)(v[i] + '0');
        return ret;
    }
    
    string addBinary(string a, string b) {
        vector<int> va, vb;
        va = toVectorReversed(a);
        vb = toVectorReversed(b);
        vector<int> sm = sum(va, vb);
        string ans = toString(sm);
        return ans;
    }
};