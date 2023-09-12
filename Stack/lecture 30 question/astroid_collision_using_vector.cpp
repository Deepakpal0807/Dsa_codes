#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int> asteroids)
{
    vector<int> s;

    int size = asteroids.size();
     for(int x : asteroids)
    {
        
        if (x < 0  and !s.empty() and s.back() > 0  )
        {
              bool flag=true;

            while (!s.empty() and s.back()>0)
            {
                
                if (-x == s.back())
                {
                    s.pop_back();
                    flag=false;
                    break;
                }
                else if(-x<s.back()){
                    flag=false;
                    break;
                }
                else{

                s.pop_back();
                }
            }
        if (flag)
        {
            s.push_back(x);
        }
        }
    else{
        s.push_back(x);
    }
    }

    return s;
}


int main()
{
    // vector<int> s = {7, 3, -4, 5, 2, -8, 2, 4, 1, -4};
    // vector<int> s={8,-8};
    vector<int> s={-2,-1,1,2};
    s = asteroidCollision(s);
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}