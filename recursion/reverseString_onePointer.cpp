#include<iostream>
using namespace std;

void isReverse(string& str, int i){
    int n = str.length();
    if(i>=n/2){
        return;
    }
    swap(str[i],str[n-i-1]);
    return isReverse(str, i+1);
}

int main(){
    string str = "abcde";
    int i = 0;
    isReverse(str, i);
    cout << str << endl;

    return 0;
}