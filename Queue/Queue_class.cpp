#include <iostream>
using namespace std;

class Queue
{
public:
    int arr[5];
    int front;
    int rear;

    Queue()
    {
        front = 0;
        rear = 0;
    }

    void push(int val)
    {
        if (rear == 5)
        {
            cout << "Queue is full";
            return;
        }
        arr[rear] = val;
        rear++;
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty";
            return;
        }
        front++;
    }

    int size()
    {
        return rear - front;
    }

    int front_ele()
    {
        return arr[front];
    }

    void display()
    {
        for (int i = front; i <= rear - 1; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.display();
    q.pop();
    q.display();
    q.pop();
    q.pop();
    cout << q.size();
    q.pop();
}
