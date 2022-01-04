string decodedString(string s){
        // code here
        stack<char> st;
        string restring = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == ']'){
                 string str = "";
               
                while(!st.empty() && st.top()!='['){
                    str=st.top()+str;
                    st.pop();
                }
                st.pop();
                string dig = "";
                while(!st.empty() && isdigit(st.top())){
                    dig += st.top();
                    st.pop();
                }
                int n = stoi(dig);
                string res = "";
                for(int i=0;i<n;i++){
                    res+=str;
                }
                for(auto ch:res){
                    st.push(ch);
                }
            }else {
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            restring+=st.top();
            st.pop();
        }
        return restring;
    }