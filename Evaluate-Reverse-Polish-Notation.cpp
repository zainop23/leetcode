1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        int n = tokens.size();
5        stack<int> st;
6        for(int i=0; i<n; i++){
7            string c = tokens[i];
8            if(c=="+"||c=="-"||c=="/"||c=="*"){
9                int c2 = st.top();
10                st.pop();
11                int c1 = st.top(); 
12                st.pop();
13                if(c=="+") st.push(c1+c2);
14                if(c=="-") st.push(c1-c2);
15                if(c=="*") st.push(c1*c2);
16                if(c=="/") st.push(c1/c2);
17            }
18            else st.push(stoi(c));
19        }
20        return st.top();
21    }
22};