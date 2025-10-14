class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long long r = 0;
        int temp = x;

        while (temp != 0)
        {
            r = r * 10 + temp % 10;
            temp /= 10;
        }

        return r == x;
    }
};
