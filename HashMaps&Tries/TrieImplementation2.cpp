#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char value;
        bool isTerminal;
        TrieNode* children[26];
    TrieNode(char value)
    {
        this->value = value;
        this->isTerminal = false;
        for(int i=0;i<26;i++)
        {
            children[i] = NULL;
        }
    }
};

void insertWord(TrieNode* root,string word)
{
    // cout<<"Received word : "<<word<<endl;
    if(word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    
    if(root->children[index] != NULL)
    {
        //present - traverse
        child = root->children[index];
    }
    else{
        //absent - traverse and make a new node and connect it with prev node
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    //recursive call
    insertWord(child,word.substr(1));

}


bool searchWord(TrieNode* root,string word)
{
    if(word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL)
    {
        //present - traverse
        child = root->children[index];
    }
    else{
        //absent
        return false;
    }

    //recusrive call
    bool recAns = searchWord(child,word.substr(1));
    return recAns;
}

void deleteWord(TrieNode* root,string word)
{
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL)
    {
        //present - traverse
        child = root->children[index];
    }
    else{
        return;
    }

    //recursive call
    deleteWord(child,word.substr(1));
}

int main()
{
    TrieNode* root = new TrieNode('\0');
    insertWord(root,"shivam");
    insertWord(root,"shiv");
    insertWord(root,"am");
    insertWord(root,"hi");

    if(searchWord(root,"am"))
    {
        cout<<"Found"<<endl;
    }

    else{
        cout<<"Not found"<<endl;
    }

    deleteWord(root,"am");

    if(searchWord(root,"am"))
    {
        cout<<"Found"<<endl;
    }

    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}