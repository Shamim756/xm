#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to check if a number is semi-prime
bool isSemiPrime(int N) {
    for (int i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            int j = N / i;
            if (isPrime(i) && isPrime(j))
                return true;
        }
    }
    return false;
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    if (isSemiPrime(N))
        cout << N << " is a semi-prime number." << endl;
    else
        cout << N << " is not a semi-prime number." << endl;

    return 0;
}
