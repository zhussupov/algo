class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        deque<int> st;
    vector<int> ret;
    for (int i = 0; i < asteroids.size(); i++) {
        if (asteroids[i] > 0)
            st.push_back(asteroids[i]);
        else {
            while (!st.empty() && abs(asteroids[i]) > st.back())
                st.pop_back();

            if (st.empty()) {
                ret.push_back(asteroids[i]);
            } else {
                if (abs(asteroids[i]) == st.back())
                    st.pop_back();
            }
        }
    }
    while (!st.empty()) {
        ret.push_back(st.front());
        st.pop_front();
    }
    return ret;
    }
};