#include <iostream>
using namespace std;
int reverseNumber(int n)
{
    int num = n, rev = 0, temp;
    while (num!=0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }
    return rev;
}
int main()
{

    cout << "Reverse number " << reverseNumber(-2147483648);
    return 0;
}