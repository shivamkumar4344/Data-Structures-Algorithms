#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char value;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char value)
    {
        this->value = value;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

void insertWord(TrieNode* root,string word)
{
    // cout<<"Received word : "<< word << endl;
    //base case 
    if(word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL)
    {
        //present
        child = root->children[index];
    }
    else{
        //absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    //recursive call
    insertWord(child,word.substr(1));
}

bool wordFound(TrieNode* root,string word)
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
        //found or present
        child = root->children[index]; 
    }
    else{
        return false;
    }

    //recursion
    bool recAns = wordFound(child,word.substr(1));
    return recAns;
}

void deleteWord(TrieNode* root,string word)
{
    if(word.length() == 0)
    {   
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    if(root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else{
        return;
    }

    //recursion
    deleteWord(child,word.substr(1));
}

int main()
{
    TrieNode* root = new TrieNode('-');
    insertWord(root,"shivam");
    insertWord(root,"raman");
    insertWord(root,"samir");
    insertWord(root,"kunal");
    insertWord(root,"ramana");

    if(wordFound(root,"raman"))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    deleteWord(root,"raman");

    if(wordFound(root,"raman"))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}