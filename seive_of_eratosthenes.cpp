#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void seive(int n, vector<int> &isprime)
{
    isprime.resize(n, true);
    isprime[0] = false;
    isprime[1] = false;

    for (int i = 2; i * i < n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    return;
}
void print_primes(vector<int> &isprime, int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> isprime;
    seive(n, isprime);
    print_primes(isprime, n);
    return 0;
}