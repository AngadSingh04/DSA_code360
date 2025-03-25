#include <bits/stdc++.h> 
#include <utility>

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    int total = m1+m2+m3;
    int average = total/3;

    return {firstLetterOfName,average};
}
