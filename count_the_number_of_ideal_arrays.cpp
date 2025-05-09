#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int MOD = 1e9 + 7;
    const int MAXN = 10010;

    vector<vector<int>> divisors;

    Solution() {
        divisors.resize(MAXN);
        for (int i = 1; i < MAXN; ++i) {
            for (int j = i * 2; j < MAXN; j += i) {
                divisors[j].push_back(i);
            }
        }
    }

    int idealArrays(int n, int maxValue) {
        vector<vector<int>> dp(maxValue + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= maxValue; ++i) {
            dp[i][1] = 1;  
        }

        for (int len = 2; len <= n; ++len) {
            for (int i = 1; i <= maxValue; ++i) {
                for (int d : divisors[i]) {
                    dp[i][len] = (dp[i][len] + dp[d][len - 1]) % MOD;
                }
            }
        }

        long long res = 0;
        for (int i = 1; i <= maxValue; ++i) {
            for (int len = 1; len <= n; ++len) {
                long long ways = comb(n - 1, len - 1);
                res = (res + (ways * dp[i][len]) % MOD) % MOD;
            }
        }

        return res;
    }

    long long comb(int n, int k) {
        static vector<long long> fact(20001, 1), inv(20001, 1);
        static bool ready = false;

        if (!ready) {
            for (int i = 2; i < fact.size(); ++i) {
                fact[i] = (fact[i - 1] * i) % MOD;
            }

            inv[fact.size() - 1] = modinv(fact[fact.size() - 1]);
            for (int i = fact.size() - 2; i >= 0; --i) {
                inv[i] = (inv[i + 1] * (i + 1)) % MOD;
            }
            ready = true;
        }

        if (k < 0 || k > n) return 0;
        return (fact[n] * inv[k] % MOD * inv[n - k] % MOD);
    }

    long long modinv(long long a) {
        return powmod(a, MOD - 2);
    }

    long long powmod(long long a, long long b) {
        long long res = 1;
        while (b > 0) {
            if (b % 2 == 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b /= 2;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    cout<<obj.idealArrays(2,5);
}