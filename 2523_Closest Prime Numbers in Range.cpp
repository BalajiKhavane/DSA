#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to generate prime numbers up to 'right' using the Sieve of Eratosthenes
vector<bool> sieveEratosthenes(int max_limit) {
    vector<bool> isPrime(max_limit + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

    for (int i = 2; i * i <= max_limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max_limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

// Function to find the closest prime numbers in the range [left, right]
vector<int> closestPrimes(int left, int right) {
    // Step 1: Generate prime numbers up to 'right'
    vector<bool> isPrime = sieveEratosthenes(right);

    // Step 2: Store all prime numbers in the given range [left, right]
    vector<int> prime_nums;
    for (int i = left; i <= right; ++i) {
        if (isPrime[i]) {
            prime_nums.push_back(i);
        }
    }

    // Step 3: Find the closest prime pair
    if (prime_nums.size() < 2) return {-1, -1};

    int num1 = -1, num2 = -1, min_diff = INT_MAX;
    for (size_t i = 1; i < prime_nums.size(); ++i) {
        int diff = prime_nums[i] - prime_nums[i - 1];
        if (diff < min_diff) {
            num1 = prime_nums[i - 1];
            num2 = prime_nums[i];
            min_diff = diff;
        }
        if (min_diff <= 2) {
            return {num1, num2};
        }
    }
    return {num1, num2};
}

int main() {
    int left, right;
    cout << "Enter the range [left, right]: ";
    cin >> left >> right;

    vector<int> result = closestPrimes(left, right);
    if (result[0] == -1) {
        cout << "No prime pairs found in the given range." << endl;
    } else {
        cout << "Closest prime pair: " << result[0] << " and " << result[1] << endl;
    }

    return 0;
}
