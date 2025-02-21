#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i1 = 0;
	int sum1 = 0;
	while(i1 < a.size()){
		sum1 = (a[i1]*pow(10,a.size()-i1-1))+sum1;
		i1++;
	}
	int j1 = 0;
	int sum2 = 0;
	while(j1 < b.size()){
		sum2 = (b[j1]*pow(10,b.size()-j1-1))+sum2;
		j1++;
	}
	vector<int> answer;
	int total = sum1+sum2;
	while(total > 0){
		int digit = total%10;
		answer.insert(answer.begin(),digit);
		total = total/10;
	}
	return answer;
}