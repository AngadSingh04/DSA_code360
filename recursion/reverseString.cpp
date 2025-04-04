#include <bits/stdc++.h> 
void isReverse(string& str, int l, int h){
	if(l > h){
		return;
	}
	swap(str[l],str[h]);
	return isReverse(str,l+1,h-1);
}
string reverseString(string str)
{
	// Write your code here.
	int l = 0;
	int h = str.length()-1;
	isReverse(str,l,h);
	return str;
}