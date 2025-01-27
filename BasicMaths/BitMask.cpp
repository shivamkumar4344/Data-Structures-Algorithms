#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    int i = 0;
    while (n != 0)
    {
        int last = n % 10;
        int power = pow(2, i);
        int ans = last * power;
        total += ans;
        n = n / 10;
        i++;
    }

    cout << total << endl;
    return 0;
}