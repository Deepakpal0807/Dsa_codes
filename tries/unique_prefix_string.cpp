#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    char ch;
    bool terminal;
    unordered_map<char, node *> mp;
    int share;

    node(char ch)
    {
        this->ch = ch;
        this->terminal = false;
        this->share=0;
    }
};
class tries
{
    node *root;

public:
    tries()
    {
        root = new node('#');
    }

    void insert(string str)
    {
        node *curr = root;
        for (char ch : str)
        {
            if (curr->mp.find(ch) == curr->mp.end())
            {
                // means the node is not present so we need to create a node.
                node *n = new node(ch);
                curr->mp[ch] = n;
                
            }

            curr = curr->mp[ch];
            curr->share++;

           
        }
         curr->terminal = true; // last charr of the string...

    }

        bool search(string str)
        {
            node *curr = root;

            for (char ch : str)
            {
                if (curr->mp.find(ch) == curr->mp.end())
                {
                    // means char are not found
                    return false;
                }
                curr=curr->mp[ch];
            }
            // if the string are present then the curr is at the last node of the string then
            // check this node is terminal node or nnot..
            return curr->terminal;
            // if terminal then true else false;
        }

        string uniqueprefix(string str){
            node* curr=root; 
            string ans;
            for(char c: str){

              ans+=c;
                if(curr->mp.find(c)!= curr->mp .end()){
                    curr=curr->mp[c];
                    //means char are found then check the frequency of the character.
                    if(curr->share==1){
                        return ans;
                    }
                }
                else{
                    return " "; //string are not found...
                }
                


            }
            if(curr->share==1){
                return ans;
            }
            return "";
        }

};
        int main()
        {
            string words[] = {"code", "coder", "coding", "block", "blocks", "news","Deepak","Deepanshu"};

            tries t;
            for (string word : words)
            {
                t.insert(word);
            }

          for(string word:words){
            cout<<"unique Prefix of ("<<word<<")  : "<< t.uniqueprefix(word)<<endl;
          }

            return 0;
        }