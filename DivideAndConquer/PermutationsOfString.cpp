#include<iostream>
using namespace std;

void findPermutations(string& str,int index){

    //base case
    if(index >= str.length()){
        cout<<str<<" ";
        return;
    }

    //main logic
    for(int j = index; j < str.length() ;j++ ){
        swap(str[index],str[j]);

        findPermutations(str,index+1);
        //again swap to change in original string not in copy so we pass string as a refrence.
        swap(str[index],str[j]);
    }
}

int main()
{

    string str = "abc";
    findPermutations(str,0);
    return 0;
}