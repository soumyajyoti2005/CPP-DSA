//not completed yet 😴...

#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {

            if (j >= i && j <= 7 - i - 1)
            {
                cout << i;
            }
            if (j < i)
            {
                cout << x;
                x++;
            }
            if (j > 7 - i - 1)
            {
                cout << x;
                x--;
            }
        }
        cout << endl;
        x = 1;
    }
}