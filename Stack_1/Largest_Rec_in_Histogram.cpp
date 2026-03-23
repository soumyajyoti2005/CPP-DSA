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

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

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

    cout << maxarea;
}