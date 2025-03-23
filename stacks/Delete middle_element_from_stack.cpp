#include <bits/stdc++.h> 

void middlee(stack<int>&inputStack, int N, int count){
   if(count == N/2){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();
   middlee(inputStack, N, count+1);
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   middlee(inputStack, N, count);
   
}