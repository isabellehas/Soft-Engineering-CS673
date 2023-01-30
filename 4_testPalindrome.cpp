#include <iostream>
using namespace std;

bool isPalindrome(string s){
    int l = 0;
    long r = s.size() - 1;
    while(l<s.size() - 1){
        l++;
        r--;
        if(s[l] != s[r]) return false;
    }
    return true;
};

int main(){
    string str = "asdfggfdsa";
  
    if (isPalindrome(str)) {
        cout << "This is a Palindrome." << endl;
    }
    else{
        cout << "This is not a Palindrome." << endl;
    }
    
    return 0;
}