#include<bits/stdc++.h>
using namespace std;
bool flag=true;
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

    //time: O(n) //linear time..
    //space : O(1) //constant space..
void search_target_iterative(listnode* head,int target){
        while(head!=NULL){
            if(head->val==target){
                cout<<"Target found"<<endl;
                return ;
            }
            head=head->next;
        }
        cout<<"Target not found"<<endl;
        return ;
    }
   

//    time:O(n) 
//space : O(n) //n= sizeof linklist stack frame are push on stack... 
    void search_target_recursive(listnode* head,int target){
        //base case..
        if(head==NULL){
            return ;
        }
        if(head->val==target){
            cout<<"Target found!"<<endl;
            flag=false;
            return ;
        }

        //recursive case.
        //recursively, found the target of linklist start with the node next to the head node..
        search_target_recursive(head->next,target);
        if(flag){
            cout<<"Target not Found"<<endl;
            flag=false;
        }
        return ;
        
    }
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);

    int target=80;
    search_target_iterative(head,target);

    search_target_recursive(head,target);


}