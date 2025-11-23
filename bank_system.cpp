#include<bits/stdc++.h>
using namespace std;

class Bank {
public:
    vector<long long> balance;
    int size;

    bool isValid(int account) {
        return account >= 1 && account <= n;
    }

    Bank(vector<long long>& balance1) {
        balance=balance1;
        size=balance.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(!isValid(account1) || !isValid(account2)){
            return false;
        }
        if(balance[account1-1]<money){
            return false;
        }
        balance[account1]-=money;
        balance[account2]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(!isValid(account)){
            return false;
        }
        balance[account]+=money;
    }
    
    bool withdraw(int account, long long money) {
        if(!isValid(account)){
            return false;
        }
        if(balance[account]<money){
            return false;
        }
        balance[account]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */