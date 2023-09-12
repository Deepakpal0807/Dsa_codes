#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[], int size)
{
    stack<int> s;
    for (int i = 0; i < size; i++)
    {
        
        if (arr[i] < 0  and !s.empty() and s.top() > 0  )
        {
              bool flag=true;

            while (!s.empty() and s.top()>0)
            {
                
                if (-arr[i] == s.top())
                {
                    s.pop();
                    flag=false;
                    break;
                }
                else if(-arr[i]<s.top()){
                    flag=false;
                    break;
                }
                else{

                s.pop();
                }
            }
        if (flag)
        {
            s.push(arr[i]);
        }
        }
    else{
        s.push(arr[i]);
    }
    }

    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> s;
    // int arr[] = {7, 3, -4, 5, 2, -8, 2, 4, 1, -4};
    int arr[]={-2,-1,1,2};
    int size = sizeof(arr) / sizeof(int);
    s = solve(arr, size);
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}