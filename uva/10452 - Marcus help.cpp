#include <bits/stdc++.h>
using namespace std;

char ma[9][9];
vector<char> v{'I', 'E', 'H', 'O', 'V', 'A', '#'};

void fill(int m, int n)
{
    char s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ma[i][j];
        }
    }
}

void bfs(int m, int n)
{
    int s, e;
    for (int i = m - 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ma[i][j] == '@')
            {
                s = i;
                e = j;
                break;
            }
        }
    }
    vector<string> v1;
    bool **visited;
    //initialize the bool as false values;
    visited = new bool *[m];
    for (int i = 0; i < m; i++)
    {
        visited[i] = new bool[n];
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
        }
    }
    queue<int> qbr;
    queue<int> qbc;
    //initialized the start cell as visited;
    visited[s][e] = true;
    qbr.push(s);
    qbc.push(e);
    int i = 0;
    while (!qbr.empty() || !qbc.empty())
    {
        int row = qbr.front();
        int col = qbc.front();
        qbr.pop();
        qbc.pop();
        if (ma[row][col] == v[v.size() - 1])
        {
            break;
        }
        //moving in the left direction
        if (col - 1 >= 0 && !visited[row][col - 1] && ma[row][col - 1] == v[i])
        {
            v1.push_back("left");
            qbr.push(row);
            qbc.push(col - 1);
            visited[row][col - 1] = true;
            i++;
        }
        //moving to the right direction
        if (col + 1 < n && !visited[row][col + 1] && ma[row][col + 1] == v[i])
        {
            v1.push_back("right");
            qbr.push(row);
            qbc.push(col + 1);
            visited[row][col + 1] = true;
            i++;
        }
        if (row - 1 >= 0 && !visited[row - 1][col] && ma[row - 1][col] == v[i])
        {
            v1.push_back("forth");
            qbr.push(row - 1);
            qbc.push(col);
            visited[row - 1][col] = true;
            i++;
        }
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (i == v1.size() - 1)
        {
            cout << v1[i] << "\n";
        }
        else
            cout << v1[i] << " ";
    }
    delete[] visited;
}

int main()
{
    // your code goes here
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> m >> n;
        fill(m, n);
        bfs(m, n);
    }
    return 0;
}
