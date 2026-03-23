#include <iostream>
using namespace std;
class MinHeap
{
public:
    int arr[50];
    int idx;
    MinHeap()
    {
        idx = 1;
    }
    int top()
    {
        return arr[1];
    }
    void push(int val)
    {
        arr[idx] = val;
        int i = idx;
        idx++;
        while (i > 1)
        {
            if (arr[i / 2] >= arr[i])
                swap(arr[i], arr[i / 2]);
            else
                break;
            i = i / 2;
        }
    }
    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        int i = 1;

        while (true)
        {
            int left = 2 * i, right = 2 * i + 1;
            if (left > idx - 1)
                break;
            if (right > idx - 1)
            {
                if (arr[left] > arr[i])
                {
                    swap(arr[left], arr[i]);
                    i = left;
                }
                break;
            }
            if (arr[left] < arr[right])
            {
                if (arr[left] > arr[i])
                {
                    swap(arr[left], arr[i]);
                    i = left;
                }
                else
                    break;
            }
            else
            {
                if (arr[right] > arr[i])
                {
                    swap(arr[right], arr[i]);
                    i = right;
                }
                else
                    break;
            }
        }
    }
    int size()
    {
        return idx - 1;
    }
};

int main()
{
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(4);
    cout << pq.top();
}