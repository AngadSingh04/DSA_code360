#include<stack>
#include<climits>
vector<int> nextElement(vector < int > arr, int n){
  stack<int> st;
  vector<int> ans(n);
  st.push(-1);
  for(int i = arr.size()-1; i >= 0; i--){
    while(st.top()!= -1 && arr[st.top()] >= arr[i]){
      st.pop();
    }
    ans[i] = st.top();
    st.push(i);
  }
  return ans;
}

vector<int> prevElement(vector<int> arr, int n){
  stack<int> st;
  st.push(-1);
  vector<int> ans(n);
  for(int i = 0; i < n; i++){
    while(st.top()!= -1 && arr[st.top()] >= arr[i]){
      st.pop();
    }
    ans[i] = st.top();
    st.push(i);
  }
  return ans;
}



int largestRectangle(vector < int > & heights) {
  // Write your code here.
  int n = heights.size();
  vector<int> next(n);
  next = nextElement(heights, n);
  vector<int> prev(n);
  prev = prevElement(heights, n);
  int area = INT_MIN;
  for(int i = 0; i < n; i++){
    int l = heights[i];
    if(next[i] == -1){
      next[i] = n;
    }
    int b = next[i]-prev[i]-1;
    int newArea = l*b;

    area = max(area,newArea);
  }

  return area;
}