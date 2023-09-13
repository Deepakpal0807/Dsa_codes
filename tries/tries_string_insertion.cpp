#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    char ch;
    bool terminal;
    unordered_map<char, node *> mp;

    node(char ch)
    {
        this->ch = ch;
        this->terminal = false;
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

};
        int main()
        {
            string words[] = {"code", "coder", "coding", "block", "blocks", "news","Deepak"};

            tries t;
            for (string word : words)
            {
                t.insert(word);
            }

            string queries[] = {"code", "coding", "blocked", "block", "news", "new","Deepak"};

            for (string query : queries)
            {
                t.search(query) ? cout << query << " is present" << endl : cout << query << " is absent" << endl;
            }

            cout << endl;

            return 0;
        }