#include<iostream>
using namespace std;
 
 template<typename T>
class stack
{
    T* arr;
    int t;
    int n;

public:
    stack(int n)
    {
        arr = new T[n];
        t = -1;
        this->n = n;
    }

    void push(T val)
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

    T top()
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
    // stack<int> s(4);
    
	// cout << "size : " << s.size() << endl;
	// cout << "isEmpty ? " << s.empty() << endl;

	// s.push(10);
	// s.push(20);
	// s.push(30);
	// s.push(40);


    //stack of string..
    stack<string> s(5);

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;
	 s.push("abc");
     s.push("def");
     s.push("ghi");
     s.push("jkl");
     s.push("mno");

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
    if(s.size()==0){
        cout<<"Stack is empty !"<<endl;
    }
    else
	cout << "top : " << s.top() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}
