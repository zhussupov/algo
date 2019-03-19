class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c: s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (c == ')') {
                    if (st.size() == 0)
                        return false;
                    if (st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                if (c == '}') {
                    if (st.size() == 0)
                        return false;
                    if (st.top() == '{')
                        st.pop();
                    else
                        return false;
                }
                if (c == ']') {
                    if (st.size() == 0)
                        return false;
                    if (st.top() == '[') 
                        st.pop();
                    else
                        return false;
                }
            }
        }
        return st.size() == 0;
    }
};