class Solution {
public:
    const long long MOD = 1e9 + 7;

    // Function to compute (base^exp) % MOD efficiently
    long long modPow(long long base, long long exp) {
        long long result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even_count = (n + 1) / 2; // positions 0,2,4,... (0-indexed)
        long long odd_count = n / 2;        // positions 1,3,5,...
        
        long long res = (modPow(5, even_count) * modPow(4, odd_count)) % MOD;
        return (int)res;
    }
};
