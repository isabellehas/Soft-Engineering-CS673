#include <iostream>
using namespace std;

int FibonacciIterative(int n)
{
    int ans = 0;
    int next = 1;

    for (int i = 1; i <= n; ++i)
    {
        int tmp = next;
        next += ans;
        ans = tmp;
    }

    return ans;
}

int main(){
    for(int i = 0; i < 100; i++){
        cout << FibonacciIterative(i) << " ";
        cout << endl;
    }
    return 0;
}