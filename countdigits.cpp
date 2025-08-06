#include <iostream>
using namespace std;
int countDigit(int n)
{
    int a = n,c=0;
    while(a>0){
        a = a / 10;
        c++;
    }
    // c++;
    return c; 
}
int main()
{

    cout<<"Digit Count is "<<countDigit(10);
    return 0;
}