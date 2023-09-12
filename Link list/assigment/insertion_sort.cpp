#include<bits/stdc++.h>
using namespace std;
class listnode{
    public:

          int val;
          listnode *next;

    //parameterised constructor..
    listnode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertionathead(listnode* &head,int val){  
            listnode* n=new listnode(val);
      
            n->next=head;
       
            head=n;
    }


    void printlinklist(listnode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
      

        return ;
    }
	listnode* solve(listnode* head,int size){
		for(int i=1;i<size;i++){
              listnode* temp=head;
			  listnode* curr=head->next;
			  listnode* prev=head;
			  while( curr!=NULL and temp->val < curr->val ){
				  if(prev==temp){
					  head=temp->next;
				  }
                   prev=curr;
					curr=curr->next;
			  }
			  prev->next=temp;
			  temp->next=curr;

		}
		
		
	}

	int main(){
		int size=5;
		// cin>>size;
		listnode* head=NULL;
		// for(int i=0;i<size;i++){
		// 	int val;
		// 	cin>>val;
		// 	insertionathead(head,val);
		// }
        insertionathead(head,3);
        insertionathead(head,2);
        insertionathead(head,5);
        insertionathead(head,4);
        insertionathead(head,1);
    
		head=solve(head,size);
		printlinklist(head);
	}