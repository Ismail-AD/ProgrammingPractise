#include <bits/stdc++.h>
using namespace std;
void printFromGivenToOne(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printFromGivenToOne(--n);
}
long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
double myPow(double x, int n)
{
    // 2 , -2
    // 0.5 , 2
    // else case 0.5 * 2-1
    if (n == 1)
    {
        return x;
    }
    double res;
    if (n < 0)
    {
        // srf ek bar run hoga fr 1 / x double mei ajae ga fr 1/x ki zaroort nae calculation hojae gi
        res = myPow(1 / x, -n);
    }
    else
    {
        res = x * myPow(x, n - 1);
    }
    return res;
}
void insertValue(stack<int> &st, int value)
{
    if (st.empty())
    {
        st.push(value);
        return;
    }
    int top = st.top();
    st.pop();
    insertValue(st, value);
    st.push(top);
}
void reverseStackUseSpace(stack<int> &st)
{
    if (st.empty())
        return;
    int top = st.top();
    st.pop();
    reverseStackUseSpace(st);
    stack<int> temp;
    while (!st.empty())
    {
        int toptemp = st.top();
        st.pop();
        temp.push(toptemp);
    }
    st.push(top);
    while (!temp.empty())
    {
        int toptemp = temp.top();
        temp.pop();
        st.push(toptemp);
    }
}
void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;
    int top = st.top();
    st.pop();

    reverseStack(st);
    insertValue(st, top);
}
int main()
{
    int a = -12 >> 8;
    // 0000 1100
    // 1111 0011
    // 1111 0100
    // 
    cout<<"\"HELLO\"";
    // cout<< sizeof(long int)<<endl;
    // cout<< sizeof(short)<<endl;
    // int x = 5;
    // cout << "Factorial of " << x << " " << factorial(x) << endl;
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // reverseStackUseSpace(st);
    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    // printFromGivenToOne(5);
    // double base = 2.0;
    // int power = -2;
    // cout << base << "^" << power <<" is "<< myPow(base, power) << endl;
    return 0;
}