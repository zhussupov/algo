/*
    Problem statement:
    Given two strings, find minimum changes to make them anagrams

    input:
        2 strings
    output:
        integer

    example:
        input:
            abc
            dha
        output:
            2
*/

// Solution:

#include <iostream>
#include <cmath>

using namespace std;

char foo[260], bar[260];

int main() {
    string s1,s2;
    cin>>s1>>s2;
    if (s1.length() != s2.length()) {
        cout<<"-1"<<endl;
        return 0;
    }
    for (auto x: s1) {
        foo[x]++;
    }
    for (auto x: s2) {
        bar[x]++;
    }
    int d = 0;
    for (int i = 0; i < 260; i++)
        d += abs(foo[i] - bar[i]);
    int ans = d/2;
    cout<<ans<<endl;
    return 0;
}