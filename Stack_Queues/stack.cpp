#include <bits/stdc++.h>
using namespace std;
class ArrayStack
{
public:
    static const int MAX_SIZE = 1000;
    int stackArr[MAX_SIZE];
    int topIndex;
    stack<char> bultin;
    ArrayStack()
    {
        topIndex = -1;
    }
    void push(int x)
    {
        if (topIndex >= MAX_SIZE - 1)
        {
            return; // overflow
        }
        stackArr[++topIndex] = x;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1; // underflow
        }
        return stackArr[topIndex--];
    }

    int top()
    {
        if (isEmpty())
        {
            return -1; // underflow
        }
        return stackArr[topIndex];
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }

    void traverse()
    {
        if (isEmpty())
        {
            return; // underflow
        }
        cout << "From top to bottom\n";
        for (int i = topIndex; i >= 0; i--)
        {
            cout << stackArr[i] << endl;
        }
    }
    string reverseString(string s)
    {
        string str;
        for (int i = 0; i < s.length(); i++)
        {
            bultin.push(s[i]);
        }
        while (!bultin.empty())
        {
            str += bultin.top();
            bultin.pop();
        }
        return str;
    }
    bool isValid(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
                bultin.push(s[i]);
            } else{
                bultin.pop();
            }
        }
        return bultin.empty();
    }
};





class ArrayForTwo
{
public:
    static const int MAX_NEW_SIZE = 10;
    int stackForTwo[MAX_NEW_SIZE];
    int topOne = -1, topTwo = MAX_NEW_SIZE;
    void push1(int x)
    {
        if (topOne < topTwo - 1)
        {
            topOne++;
            stackForTwo[topOne] = x;
        }
    }

    int pop1()
    {
        if (isEmpty1())
        {
            return -1; // overflow
        }
        int value = topOne;
        topOne--;
        return value;
    }

    int top1()
    {
        if (isEmpty1())
        {
            return -2;
        }
        return stackForTwo[topOne];
    }
    void push2(int x)
    {
        if (topOne < topTwo - 1)
        {
            topTwo++;
            stackForTwo[topTwo] = x;
        }
    }

    int pop2()
    {
        if (isEmpty2())
        {
            return -1; // overflow
        }
        int value = topTwo;
        topTwo--;
        return value;
    }

    int top2()
    {
        if (isEmpty2())
        {
            return -2;
        }
        return stackForTwo[topTwo];
    }
    bool isEmpty1()
    {
        return topOne == -1;
    }
    bool isEmpty2()
    {
        return topTwo == MAX_NEW_SIZE;
    }
};

int main()
{
    ArrayStack arr;
    ArrayForTwo arr2;
    cout<<"1==True AND 0==FALSE AND Answer is "<<arr.isValid("{{[[(())]]}}")<<endl;
    // string s = "GeeksQuiz";
    // cout << arr.reverseString(s) << endl;

    // arr2.push1(1);
    // arr2.push1(2);
    // arr2.push1(3);
    // arr2.push2(7);
    // arr2.push2(8);
    // arr2.push2(9);
    // cout << arr2.top1() << endl;
    // cout << arr2.top2() << endl;
    // arr2.pop1();
    // arr2.pop2();
    // cout << arr2.top1() << endl;
    // cout << arr2.top2() << endl;

    // cout << arr.top() << endl;
    // arr.push(1);
    // arr.push(2);
    // arr.push(3);
    // arr.push(4);
    // arr.push(5);
    // cout << arr.top() << endl;
    // arr.traverse();
    // arr.pop();
    // cout << arr.top() << endl;
    // arr.traverse();
    return 0;
}