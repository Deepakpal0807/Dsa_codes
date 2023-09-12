#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list<int> l1;
    
    cout<<"size = "<<distance(l1.begin(),l1.end())<<endl; //for singly linklist.. and doubly linklist..
    cout<<"size = "<<l1.size()<<endl;    //for doubly linklist only..
    //size of the linklist//

    //insertion at head.. in constant time..
    l1.push_front(30);
    l1.push_front(20); 
    l1.push_front(10);

    //insertion at tail at constant time..
    l1.push_back(40);
    l1.push_back(50);

    for(int x: l1){
        cout<<x<<" ";
    }
    cout<<endl;

      cout<<"size = "<<l1.size()<<endl;   

    //deletion at head.. constant time..
    l1.pop_front();

    //deletion at tail ... constant time..
    l1.pop_back();

    for(int x: l1){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;

    cout<<"size = "<<l1.size()<<endl;

    //make list of given size..
    list<int> l2(5);
    cout<<"size = "<<l2.size()<<endl;
    for(int x: l2){
        cout<<x<<" ";
    }
    cout<<endl;

    list<int> l4 = {1, 2, 3, 4, 5};
	cout << "size = " << l4.size() << endl;

	// iterate over the foward_list using iterator

	for (auto it = l4.begin(), end = l4.end(); it != end; it++) {
		cout << *it << " ";
	}

	cout << endl;

    // create a list using fill constructor

	list<int> l5(3, 100); // creates a list of size 3 all with values 100

	cout << "size = " << l5.size() << endl;

	// iterate over the list using iterator

      for(int x:l5){
        cout<<x<<" ";
      }
	cout << endl;

}