class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlen = haystack.length(), nlen = needle.length();
        for (int i = 0; i <= hlen - nlen; i++) {
            bool ok = true;
            for (int j = 0; j < nlen; j++) {
                if (haystack[i+j] != needle[j]) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                return i;
        }
        return -1;
    }
};