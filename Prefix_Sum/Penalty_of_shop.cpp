#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    string customers = "YNYNNYY";
    int n = 7;
    int sum = 0;
    for (int i = 0; i < n; i++) // calculating penalty if shop close at 0 hr;
    {
        if (customers[i] == 'Y')
            sum += 1;
    }
    vector<int> prefix_penalty(n + 1, 0);
    prefix_penalty[0] = sum;
    for (int i = 1; i < n + 1; i++) // calculating each time penalty by increasing hr++;
    {
        if (customers[i - 1] == 'Y')
            prefix_penalty[i] = prefix_penalty[i - 1] - 1;
        if (customers[i - 1] == 'N')
            prefix_penalty[i] = prefix_penalty[i - 1] + 1;
    }
    int min_penalty = INT_MAX;
    int idx;
    for (int i = 0; i < n + 1; i++)
    {
        if (prefix_penalty[i] < min_penalty) // finding minimum penalty
        {
            min_penalty = prefix_penalty[i];
            idx = i;
        }
    }
    cout << idx;
}