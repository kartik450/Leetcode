#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};

int main() {
    Solution obj;
    vector<string> vec = {"flower", "flow", "flight"};

    // Optional: Check type
    cout << "Type of vec: " << typeid(vec).name() << endl;

    cout << "Longest Common Prefix: " << obj.longestCommonPrefix(vec) << endl;

    return 0;
}
