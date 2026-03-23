#include <iostream>
#include <string>
using namespace std;
class Books_store
{
private:
    string name;
    int price;
    int pages;

public:
    int count_Books(int budget)
    {
        if (price < budget)
            return 1;
        else
            return 0;
    }
    bool is_book_present(string book)
    {
        if (name == book)
            return true;
        else
            return false;
    }
    void set_book_name(string s)
    {
        name = s;
    }
    void set_price(int cost)
    {
        price = cost;
    }
};
int main()
{
    Books_store algorithms;
    algorithms.set_book_name("DSA");
    algorithms.set_price(550);
    cout << algorithms.is_book_present("DSA") << endl;
    cout << algorithms.count_Books(500) << endl;
}