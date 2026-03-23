#include <iostream>
#include <vector>
using namespace std;

int find(int x, vector<int> &parent)
{
    if (parent[x] == x)
        return x;

    return parent[x] = find(parent[x], parent);
}

bool Union(int a, int b, vector<int> &parent, vector<int> &rank)
{

    int x = find(a, parent);
    int y = find(b, parent);

    if (x == y)
        return true;

    if (rank[x] >= rank[y])
    {
        parent[y] = x;
        rank[x]++;
    }
    else
    {
        parent[x] = y;
        rank[y]++;
    }
    return false;
}

int main()
{
    int n;
    cout << "enter no of vertices: ";
    cin >> n;
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 1);

    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }

    int m;
    cout << "enter no of edges: ";
    cin >> m;
    bool cycle = false;
    cout << "enter edges: ";

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        cycle = cycle || Union(a, b, parent, rank);
    }
    if (cycle) cout << "cycle detected";

    else cout << "no cycle detected";
}

// 0 1
// 0 2
// 0 3
// 3 4
// 3 6
// 4 5
// 5 6
// 6 7
// 7 8
// 7 9

// 0 2
// 0 3
// 3 4
// 4 5
// 5 6
// 6 7
// 7 8
// 7 9