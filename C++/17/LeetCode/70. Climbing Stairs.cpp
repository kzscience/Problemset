class Solution {
public:
    int climbStairs(const int &n) {
        if (n == 1) {
            return 1;
        }

        int previous = 1, current = 2;
        for (int i = 3; i <= n; i++)
        {
            int next = previous + current;
            previous = current;
            current = next;
        }
        return current;  
    }
};
