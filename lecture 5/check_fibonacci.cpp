#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an positive integer value : ";
    cin >> n;
    int a = 0;
    int b = 1;
    int c = 0;
    if (n == 0 || n == 1)
    {
        cout <<"true"<< endl;
        return 0;
    }
    
        while (c < n)
        {
            c = a + b;
            if (n == c)
            {
                cout <<"true"<< endl;
                return 0;
            }
            a = b;
            b = c;
        }
    
    cout <<"false";
    return 0;
}