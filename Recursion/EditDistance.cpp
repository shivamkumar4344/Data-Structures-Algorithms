#include<iostream>
using namespace std;

int editDistance(string& word1, string& word2 ,int i ,int j){
    
    if(i >= word1.length()){
        return word2.length() - j;
    }
    if(j >= word2.length()){
        return word1.length() - i;
    }

    int finalAns = 0;

    if(word1[i] == word2[j]){
        finalAns = editDistance(word1,word2,i+1,j+1);
    }
    else{
        //1 case - insert
        int ans1 = 1 + editDistance(word1,word2,i,j+1);
        //2 case - remove
        int ans2 = 1 + editDistance(word1,word2,i+1,j);
        //3 case - replace
        int ans3 = 1 + editDistance(word1,word2,i+1,j+1);
        finalAns = min(ans1,min(ans2,ans3));
    }

    return finalAns;
}

int main()
{
    int i = 0;
    int j = 0;
    string word1 = "horse";
    string word2 = "ros";
    cout<<"Minimum number of characters to reach smallest distance: "<<editDistance(word1,word2,i,j)<<endl;
    return 0;

}