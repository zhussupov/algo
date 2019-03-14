class Solution {
public:
    vector<int> splitIntoFibonacci(string S) {
      int N = S.length();
    for (int len1 = 1; len1 < min(10, N); len1++) {
        string s1 = S.substr(0, len1);
        long long f1 = stoll(s1);
        if (f1 > INT_MAX)
            break;
        for (int len2 = 1; len2 < min(10, N - len1); len2++) {
            if (S[len1] == '0' && len2 > 1)
                continue;
            string s2 = S.substr(len1, len2);
            
            long long f2 = stoll(s2);
            if (f2 > INT_MAX)
                break;

            vector<int> fib = {(int)f1, (int)f2};

            string s3 = "";
            for (int j = len1 + len2; j < N; j++) {
                s3 += S[j];
                if (s3[0] == '0' && s3.length() > 1)
                    break;
                long long cur = stoll(s3);
                if (cur > INT_MAX)
                    break;
                long long a = (long long) fib[fib.size() - 2];
                long long b = (long long) fib[fib.size() - 1];
                if (cur == a + b) {
                    fib.push_back((int)cur);
                    s3 = "";
                    if (j == N - 1)
                        return fib;
                } else if (cur > a + b) {
                    break;
                }
                
            }
        }
        if (S[0] == '0' && len1 >= 1)
            break;
    }
    vector<int> empty;
    return empty;
    }
};