#include <iostream>
using namespace std;

bool isLeapYear(int year){
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0){
                return true;
            }
            else return false;
        }
        return true;
    }
    return false;
}

int main(){
    cout << "Please input a year" << endl;
    int y;
    cin >> y;
    if(isLeapYear(y)){
        cout << "This is a leap year." << endl;
    }
    else{
        cout << "This is not a leap year." << endl;
    }
    
    return 0;
}
