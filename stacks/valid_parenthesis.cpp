bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> s1;

    for(int i = 0; i < s.length(); i++){
        if( s[i] == '{' || s[i] == '[' || s[i] == '('){
            s1.push(s[i]);
        }else{
            if(!s1.empty()){
                char t = s1.top();
                if(t=='(' && s[i]==')' || t =='{' && s[i]=='}' || t=='[' && s[i]==']'){
                    s1.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s1.empty()){
        return true;
    }else{
        return false;
    }
}