#include <iostream>
#include <string>
#include <vector>
using namespace std;

void permute(string &s, int l, int r, vector<string> &result) {
    if (l == r) {
        result.push_back(s);
        return;
    }
    for (int i = l; i <= r; ++i) {
        swap(s[l], s[i]);
        permute(s, l + 1, r, result);
        swap(s[l], s[i]); // backtrack
    }
}

int main() {
    string s = "ABC";
    vector<string> result;

    permute(s, 0, s.size() - 1, result);

    for (const string &p : result)
        cout << p << endl;

    return 0;
}
