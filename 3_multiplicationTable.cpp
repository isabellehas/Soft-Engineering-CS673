#include <iostream>
using namespace std;

int main(){
    int i, j;
    for(i = 1; i < 13; i++){
        for(j = 1; j < 13; j++){
            cout << i << "x" << j << "=" << i*j << endl;
        }
        cout << "\n";
    }
    return 0;
}
