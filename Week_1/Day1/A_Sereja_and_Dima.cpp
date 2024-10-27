#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long int Sereja = 0;
    long long int Dima = 0;
    int i = 0, j = n - 1;
    bool move = true;
    while (i <= j)
    {
        if (ar[i] > ar[j])
        {
            if (move)
                Sereja += ar[i];
            else
                Dima += ar[i];
            i++;
        }
        else
        {
            if (move)
                Sereja += ar[j];
            else
                Dima += ar[j];
            j--;
        }
        move = !move;
    }

    cout << Sereja << " " << Dima << endl;
    return 0;
}
