// searh a 2D matrix 2(||);
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int r = matrix.size();
    int c = matrix[0].size();
    int i = 0, j = c - 1;
    while (i <= r - 1 && j >= 0)
    {
        if (matrix[i][j] == target)
            return true;
        else if (target > matrix[i][j])
            i++;
        else
            j--;
    }
    return false;
}
int main()
{
    int r;
    cout << "enter no of row: ";
    cin >> r;
    int c;
    cout << "enter no of column: ";
    cin >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    int key;
    cout << "enter target value : ";
    cin >> key;
    bool x = searchMatrix(v, key);
    cout << x;
}