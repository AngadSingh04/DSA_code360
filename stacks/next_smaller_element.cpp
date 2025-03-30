#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for(int i = arr.size()-1;i >= 0; i--){
        while(st.top() >= arr[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}