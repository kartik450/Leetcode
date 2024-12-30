class Solution {
public:
	long long r,p=0;
    int i;
    bool isPalindrome(int x) {
    	int y=x;
        while(x!=0)
        {
        	p=p*10+x%10;;
        	x=x/10;
		}
		if(p!=y || y<0)
		{
			return false;
		}
		else{
			return true;
		}
    }
};