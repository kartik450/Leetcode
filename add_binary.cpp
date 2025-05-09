#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    char add(char x, char y, int *p) {
        if (x == '0' && y == '0' && *p == 1) {
            *p = 0;
            return '1';
        }
        else if (x == '0' && y == '0' && *p == 2) {
            *p = 1;
            return '0';
        }
        else if (x == '0' && y == '1' && *p == 1) {
            *p = 1;
            return '0';
        }
        else if (x == '0' && y == '1' && *p == 2) {
            *p = 1;
            return '1';
        }
        else if (x == '1' && y == '0' && *p == 1) {
            *p = 1;
            return '0';
        }
        else if (x == '1' && y == '0' && *p == 2) {
            *p = 1;
            return '1';
        }
        else if (x == '1' && y == '1' && *p == 1) {
            *p = 2;
            return '1';
        }
        else if (x == '1' && y == '1' && *p == 2) {
            *p = 2;
            return '0';
        }
        else if (x == '0' && y == '0' && *p == 0) {
            *p = 0;
            return '0';
        }
        else if ((x == '1' && y == '0' && *p == 0) || (x == '0' && y == '1' && *p == 0)) {
            *p = 0;
            return '1';
        }
        else if (x == '1' && y == '1' && *p == 0) {
            *p = 1;
            return '0';
        }

        return '0';
    }

    string addBinary(string a, string b) {
        int t = 0;
        vector<char> vec;

        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || t) {
            char x = (i >= 0) ? a[i] : '0';
            char y = (j >= 0) ? b[j] : '0';
            vec.push_back(add(x, y, &t));
            i--; j--;
        }

        string result = "";
        for (int k = vec.size() - 1; k >= 0; k--) {
            result += vec[k];
        }

        return result;
    }
};

int main() {
    string x = "1001", y = "1001";
    Solution obj;
    cout << obj.addBinary(x, y) << endl;
}
