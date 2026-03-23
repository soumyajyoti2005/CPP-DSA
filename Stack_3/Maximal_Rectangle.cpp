#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void next_smaller(vector<int> v, vector<int> &nsi)
{
    stack<int> st;
    st.push(v.size() - 1);
    nsi[v.size() - 1] = -1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (st.size() > 0 && v[st.top()] >= v[i])
        {
            st.pop();
        }
        if (st.size() > 0)
        {
            nsi[i] = st.top();
        }
        else
        {
            nsi[i] = -1;
        }
        st.push(i);
    }
}

void prev_smaller(vector<int> v, vector<int> &psi)
{
    stack<int> st;
    st.push(0);
    psi[0] = -1;

    for (int i = 0; i < v.size(); i++)
    {
        while (st.size() > 0 && v[st.top()] >= v[i])
        {
            st.pop();
        }
        if (st.size() > 0)
        {
            psi[i] = st.top();
        }
        else
        {
            psi[i] = -1;
        }
        st.push(i);
    }
}

int Largest_rec(vector<int> v)
{
    vector<int> nsi(v.size());
    next_smaller(v, nsi);

    vector<int> psi(v.size());
    prev_smaller(v, psi);

    vector<int> width(v.size());
    int width1;
    int width2;

    for (int i = 0; i < v.size(); i++)
    {
        if (nsi[i] != -1)
            width1 = nsi[i] - i;
        else
            width1 = v.size() - i;
        if (psi[i] != -1)
            width2 = i - (psi[i] + 1);
        else
            width2 = i - 0;

        width[i] = width1 + width2;
    }

    int maxarea = 0;
    int area = 0;

    for (int i = 0; i < width.size(); i++)
    {
        area = width[i] * v[i];
        if (area > maxarea)
        {
            maxarea = area;
        }
    }
    return maxarea;
}

int main()
{
    vector<vector<char>> matrix;
    vector<char> r;
    r.push_back('1');
    r.push_back('0');
    r.push_back('1');
    r.push_back('0');
    r.push_back('0');
    matrix.push_back(r);
    vector<char> s;
    s.push_back('1');
    s.push_back('0');
    s.push_back('1');
    s.push_back('1');
    s.push_back('1');
    matrix.push_back(s);
    vector<char> t;
    t.push_back('1');
    t.push_back('1');
    t.push_back('1');
    t.push_back('1');
    t.push_back('1');
    matrix.push_back(t);
    vector<char> u;
    u.push_back('1');
    u.push_back('0');
    u.push_back('0');
    u.push_back('1');
    u.push_back('0');
    matrix.push_back(u);

    vector<vector<int>> pre_sum(matrix.size(), vector<int>(matrix[0].size(), 0));

    for (int j = 0; j < matrix[0].size(); j++)
    {
        pre_sum[0][j] = matrix[0][j] - '0';
    }

    for (int j = 0; j < matrix[0].size(); j++)
    {
        for (int i = 1; i < matrix.size(); i++)
        {
            if (matrix[i][j] == '1')
            {
                pre_sum[i][j] = pre_sum[i - 1][j] + 1;
            }
        }
    }

    // for (int i = 1; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix[0].size(); j++)
    //     {
    //         cout << pre_sum[i][j];
    //     }
    //     cout << endl;
    // }

    int rec = 0;
    int max_rec = 0;

    for (int i = 0; i < pre_sum.size(); i++)
    {
        int rec = Largest_rec(pre_sum[i]);
        if (rec > max_rec)
        {
            max_rec = rec;
        }
    }
    cout << max_rec;
}