#include<iostream>
using namespace std;

class stack
{
    int* arr;
    int t;
    int n;

public:
    stack(int n)
    {
        arr = new int[n];
        t = -1;
        this->n = n;
    }

    void push(int val)
    {
        if (t == n - 1)
        { // over flow condition ..
            return;
        }
        t++;
        arr[t] = val;
    }

    void pop()
    {
        if (t == -1)
        { // under flow condition
            return;
        }
        t--;
    }

    int top()
    {
        return arr[t];
    }

    int size()
    {
        return t + 1;
    }

    bool empty()
    {
        return t == -1;
    }
};
int main()
{
    stack s(4);
    
	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	

    cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
    if(s.size()==0){
        cout<<"Stack is empty !"<<endl;
    }
    else
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}
