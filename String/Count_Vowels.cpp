#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    string str;
    cout << "enter any sentence: ";
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            c++;
    }
    cout << "the no of total vowels: " << c;
}