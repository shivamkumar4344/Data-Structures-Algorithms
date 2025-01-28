#include<iostream>
using namespace std;

void toh(int n,char src,char dest,char helper){
    if(n==0) return;
    toh(n-1,src,helper,dest);
    cout<<"Moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,dest,src);
}

int main()
{
    int n = 3;
    char src = 'A';
    char helper = 'B';
    char dest = 'C';
    toh(n,src,dest,helper);
    return 0;

}