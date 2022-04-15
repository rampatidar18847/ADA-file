#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[9][9], b[9][9], c[9][9];
    int p, q, r, s, t, u, v, i, j;

    cout << "enter a array element :";
    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

  

    cout << "enter b array element :";
    for (i = 1; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    p = (a[1][1] + a[2][2]) * (b[1][1] + b[2][2]);
    q = (a[2][1] + a[2][2]) * b[1][1];
    r = a[1][1] * (b[1][2] - b[2][2]);
    s = a[2][2] * (b[2][1] - b[1][1]);
    t = (a[1][1] + a[1][2]) * b[2][2];
    u = (a[2][1] - a[1][1]) * (b[1][1] + b[1][2]);
    v = (b[2][1] + b[2][2]) * (a[1][2] - a[2][2]);

    c[1][1] = p + s - t + v;
    c[1][2] = r + t;
    c[2][1] = q + s;
    c[2][2] = p + r - q + u;

    cout << "strassen matrix : ";
    for (i = 1; i < 3; i++)
    {
        cout << "\n";
        for (j = 1; j < 3; j++)
        {
            cout << " " << c[i][j];
        }
    }

    cout << "\n";
    return 0;
}
