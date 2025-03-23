// Can ssolve using recursion only for small inputs

class Solution
{
public:
    int c = 0;

    void count(int n)
    {

        if (n == 0)
        {
            c++;
            return;
        }
        if (n < 0)
        {
            return;
        }

        count(n - 1);
        count(n - 2);
    }

    int climbStairs(int n)
    {
        count(n);
        return c;
    }
};

// DP

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1 || n == 2)
        {
            return n;
        }

        int n1 = 1;
        int n2 = 2;
        for (int i = 3; i <= n; i++)
        {
            int n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }

        return n2;
    }
};