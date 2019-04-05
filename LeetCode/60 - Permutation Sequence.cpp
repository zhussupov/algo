class Solution {
public:
    string getPermutation(int n, int k) {
        string perm = "";
        for (int i = 1; i <= n; i++)
            perm += (char)(i + '0');
        for (int i = 1; i < k; i++)
            next_permutation(perm.begin(), perm.end());
        return perm;
    }
};