#include <iostream>
using namespace std;
int main()
{
    int n = 1;

    int x = n;
    int i;
    for (i = 1; i <= 32; i++)
    {
        x = x >> 1;
        if (x == 0)
            break;
    }

    
    if ( (i%2!=0) && ((n) & (n - 1))==0){
          cout<<true;
    }
    else cout<<false;
}