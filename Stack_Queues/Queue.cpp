#include <bits/stdc++.h>
using namespace std;
class QueueArray
{
public:
    static const int SIZE_MAX_VALUE = 5;
    int qArr[SIZE_MAX_VALUE];
    int frontIndex;
    int lastIndex;
    QueueArray()

    {
        frontIndex = -1;
        lastIndex = -1;
    }
    void push(int x)
    {
        if (lastIndex == SIZE_MAX_VALUE - 1)
        {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (isEmpty())
        {
            lastIndex = frontIndex = 0;
        }
        else
        {
            lastIndex++;
        }
        qArr[lastIndex] = x;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        int value = qArr[frontIndex];
        if (frontIndex == lastIndex)
        {
            frontIndex = -1;
            lastIndex = -1;
        }
        else
        {
            frontIndex++;
        }
        return value;
    }

    // front
    int peek()
    {
        return isEmpty() ? -1 : qArr[frontIndex];
    }

    bool isEmpty()
    {
        return frontIndex == -1;
    }

    // CIRCULAR QUEUE

    void pushCircle(int x)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (isEmpty())
        {
            lastIndex = frontIndex = 0;
        }
        else
        {
            lastIndex = (lastIndex + 1) % SIZE_MAX_VALUE;
        }
        qArr[lastIndex] = x;
    }

    int popCircle()
    {
        if (isEmpty())
        {
            cout << "Empty !" << endl;
            return -1;
        }
        int value = qArr[frontIndex];
        if (frontIndex == lastIndex)
        {
            frontIndex = -1;
            lastIndex = -1;
        }
        else
        {
            frontIndex = (frontIndex + 1) % SIZE_MAX_VALUE;
        }
        return value;
    }

    // front
    int peekCircle()
    {
        return isEmpty() ? -1 : qArr[frontIndex];
    }

    bool isFull()
    {
        if (lastIndex + 1 % SIZE_MAX_VALUE == frontIndex)
        {
            cout << "Queue is Full!" << endl;
            return true;
        }
        return false;
    }
    bool isEmptyCircle()
    {
        return frontIndex == -1;
    }
    void traverse()
    {
        if (isEmpty())
        {
            return; // underflow
        }
        int i = frontIndex;
        do
        {
            cout << qArr[i] << endl;
            i = (i + 1) % SIZE_MAX_VALUE;
        } while (i != (lastIndex + 1) % SIZE_MAX_VALUE);
    }
};
int main()
{
    QueueArray arr;
    QueueArray arr2;
    // cout << "Is Empty ? true -> 1 false -> 0 Answer is " << arr.isEmpty() << endl;
    // cout << "Poped Value .. Answer is " << arr.pop() << endl;
    // arr.push(1);
    // arr.push(2);
    // arr.push(3);
    // arr.push(4);
    // arr.push(5);
    // cout << "Front Value .. Answer is " << arr.peek() << endl;
    // cout << "Poped Value .. Answer is " << arr.pop() << endl;

    // cout << "Poped Value .. Answer is " << arr.pop() << endl;
    // cout << "Front Value .. Answer is " << arr.peek() << endl;
    arr2.pushCircle(1);
    arr2.pushCircle(2);
    arr2.pushCircle(3);
    arr2.pushCircle(4);
    arr2.pushCircle(5);
    arr2.popCircle();
    arr2.popCircle();
    arr2.pushCircle(6);
    arr2.pushCircle(7);
    arr2.traverse();

    return 0;
}