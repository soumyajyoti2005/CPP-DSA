#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int customers[] = {4, 10, 10};
    int grumpy[] = {1, 1, 0};
    int minutes = 2;
    int n = 3;
    int loss = 0;
    for (int i = 0; i <= minutes - 1; i++) // for 1st window sattisfaction loss;
    {
        if (grumpy[i] == 1)
            loss += customers[i];
    }
    int max_loss = loss;
    int idx = 0;
    for (int i = 1; i <= n - minutes; i++)
    { // for calculating max loss window ;
        if (grumpy[i - 1] == 1)
            loss -= customers[i - 1];
        if (grumpy[minutes + i - 1] == 1)
            loss += customers[minutes + i - 1];
        if (max_loss < loss)
        {
            max_loss = loss;
            idx = i;
        }
    }
    int sattisfaction = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= idx && i <= minutes + idx - 1)
        {
            sattisfaction += customers[i];
        }
        else if (grumpy[i] == 0)
        {
            sattisfaction += customers[i];
        }
    }
    cout << sattisfaction;
}