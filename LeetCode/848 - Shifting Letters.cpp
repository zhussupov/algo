class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
       long long sum = 0;
    int N = S.length();
    for (int i = 0; i < N; i++) {
        sum += (long long) shifts[i];
    }

    for (int i = 0; i < N; i++) {
        long long cur = sum % 26;
        int x = (int)(S[i] - 'a');
        int shft = (x + cur) % 26;
        S[i] = (char)(shft + 'a');
        sum -= (long long) shifts[i];
    }
    return S; 
    }
};