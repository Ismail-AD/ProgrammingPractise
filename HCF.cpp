#include <bits/stdc++.h>
using namespace std;
int GCD(int n1, int n2)
{
    vector<int> a, b, c;
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            a.push_back(i);
        }
    }

    for (int j = 1; j <= n2; j++)
    {
        if (n2 % j == 0)
        {
            b.push_back(j);
        }
    }
    for (auto x : a)
    {
        auto it = find(b.begin(), b.end(), x);
        if (it != b.end())
        {
            c.push_back(x);
        }
    }
    return *max_element(c.begin(),c.end());
}
 // better approach in terms of space and time complexity
int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    // Return gcd of a and b
    return result;
}

// Euclidean Algorithm - Subtraction

// The idea of this algorithm is, the GCD of two numbers doesn't change if the smaller number is subtracted from the bigger number. 

int gcdEc(int a , int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a = 8 , b= 12;
    cout<<"HCF/GCD of " << a <<" and "<< b<<" is "<<gcd(a, b)<<endl;
    cout<<"HCF/GCD of " << a <<" and "<< b<<" is "<<gcdEc(a, b);
    return 0;
}