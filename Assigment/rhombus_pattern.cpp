#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int k = i;
        // printing first spaces..
        for (int j = 1; j <= N - i; j++)
        {
            cout << "\t";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << k << "\t";
            k++;
        }

        k--;
        for (int j = 1; j < i; j++)
        {
            k--;
            cout << k << "\t";
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; i--)
    {
        int k = i;
        for (int j = 1; j <= N - i; j++)
        {
            cout << "\t";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k << "\t";
            k++;
        }
        k--;
        for (int j = 1; j < i; j++)
        {
            k--;
            cout << k << "\t";
        }
        cout << endl;
    }
    return 0;
}