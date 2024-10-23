// Can ssolve using recursion only for small inputs

class Solution {
public:

    int c = 0;

    void count(int n){

        if(n == 0){
            c++;
            return;
        }
        if(n<0){
            return;
        }

        count(n-1);
        count(n-2);

    }

    int climbStairs(int n) {
        count(n);
        return c;
    }
};