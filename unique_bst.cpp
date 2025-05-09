#include <iostream>
#include <cmath>


class Solution {
    public:
        int numTrees(int n) {
            return ((tgamma((2*n+1))/((tgamma(n+2))*(tgamma(n+1)))));
        }
};