#include <iostream>
using namespace std;
int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 1; i < size; i++)
    {

        for (int k = 0; k < size - i; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}