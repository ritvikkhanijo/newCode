class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        int k=1;
        string ans = "";
        for(int i=0;i<S.length();i++){
            if(S[i] == 'D'){
                st.push(k);
                k++;
            }else{
                st.push(k);
                k++;
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(k);
         while(!st.empty()){
            ans+=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};