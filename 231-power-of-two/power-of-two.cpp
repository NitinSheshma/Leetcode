class Solution {
public:
    // recursive function to calculate 2^n
    long long  power(int n) {
        if (n == 0) {
            return 1;
        }
        long long smallerProblem = power(n - 1);
        long long biggerProblem = 2 * smallerProblem;
        return biggerProblem;
    }

    // check if n is power of two using power() recursion
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;   // power of two must be positive

        long long  exp = 0;
        while (true) {
            long long val = power(exp);   // compute 2^exp
            if (val == n) return true;   // match found
            if (val > n) return false;   // crossed n, stop
            exp++;
        }
    }
};
