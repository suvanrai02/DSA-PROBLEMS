class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        int t=x;
        int a;
        long long b=0;
        while(t>0){
            a=t%10;
            t=(t-a)/10;
            b=(b*10)+a;
        }
        return b==x;
    }
};