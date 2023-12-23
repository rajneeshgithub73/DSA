#include <bits/stdc++.h>
using namespace std;

// check for prime numbers.
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else
    {
        int k=sqrt(n);
        for (int i = 2; i <= k; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}

//sieve of eratothenes.
int sieveoferatosthenes(int n){
    if(n<=1) return 0;

    vector<bool> prime(n, true);
    int count = 0;
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            count++;
            for(int j=i+prime[i]; j <= n; j+=prime[i]){
                prime[i] = false;
            }
        }
    }
    return count;
}


// count primes.
// Naive approach.
int count_primes(int N)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{

    cout << count_primes(5);

    return 0;
}