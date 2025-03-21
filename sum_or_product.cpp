#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	// Write your code here.
	long long int sum = 0;
	long long int product = 1;
	if(q==1){
		for(int i = 1; i <= n; i++){
			sum += i;
		}
		return sum;
	}else{
		for(int i = 1; i <= n; i++){
			product = (product * i)% 1000000007;
		}
		return product;
	}

}