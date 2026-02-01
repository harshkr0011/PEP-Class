class Solution {
public:
    int countPrimes(int n) {
        vector<int> arr(n+1);
        int count = 0;

        // Step 1: Mark all numbers from 2 to n as prime
        for (int i = 2; i <= n; i++) {
            arr[i] = 1;
        }

        // Step 2: Mark non-prime numbers
        for (int i = 2; i * i <= n; i++) {
            if (arr[i] == 1) {
                for (int j = i * i; j <= n; j += i) {
                    arr[j] = 0;
                }
            }
        }

        // Step 3: Count primes less than n
        for (int i = 2; i <= n - 1; i++) {
            if (arr[i] == 1) count++;
        }

        return count;
    }
};