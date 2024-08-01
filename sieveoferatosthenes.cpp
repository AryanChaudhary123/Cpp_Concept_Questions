#include<iostream>
#include<vector> // Include vector library for the prime array
using namespace std;

int countPrimes(int n){
    if (n <= 1) return 0; // If n is less than or equal to 1, there are no primes
    int count = 0;
    vector<bool> prime(n + 1, true); // Declare prime as a vector of size n+1 initialized to true
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            count++;
            for(int j = 2 * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n = 5;
    int result = countPrimes(n);
    cout << "Number of primes up to " << n << " is: " << result << endl;
    return 0;
}
