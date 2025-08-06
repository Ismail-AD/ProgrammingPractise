#include <bits/stdc++.h>
using namespace std;
// ap count krlo 1 sy n tk agr 2 sy ziada hein to prime hai

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i < n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

//Every divisor (number) > 6 has a partner ≤ 6!
bool isPrimeStriver(int n)
{
    int cnt=0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0){
            cnt++;
            // When you find a divisor, you actually find TWO divisors at once (a pair).
            // 2nd What if i and n/i are the same number? 36/6=6 and 6*6 = 36 not like 4*3 or 3*4
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt)
    return true;
}


bool isPrimeLast(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    int a = 7;
    cout << "(0 -> false ... 1-> true) Now is this a Prime: " << isPrime(a);
    return 0;
}