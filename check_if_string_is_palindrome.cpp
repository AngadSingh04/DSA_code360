#include <bits/stdc++.h> 
char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char chr = ch - 'A' + 'a';
        return chr;
        
    }
}

bool legalchar(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
        return true;
    }
    return false;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    int low = 0;
    int high = s.length()-1;
    while(low<=high){
        while(low < high && !legalchar(s[low])){
            low++;
        }
        while(low < high && !legalchar(s[high])){
            high--;
        }
        if(tolowercase(s[low])!=tolowercase(s[high])){
            return 0;
        }
        low++;
        high--;
    }
    return 1;
}