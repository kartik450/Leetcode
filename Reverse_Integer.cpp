class Solution {
public:
    int reverse(int x) {
        long long q = 0;
        while(x != 0)
        {
            q = q * 10 + x % 10;
            x = x / 10;
        }
        if (q > INT_MAX || q < INT_MIN)
            return 0;
        else
            return q;
    }
};