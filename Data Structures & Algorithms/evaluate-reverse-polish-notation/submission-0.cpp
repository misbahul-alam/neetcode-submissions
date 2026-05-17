class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();

                int ans;

                if (s == "+")
                    ans = n1 + n2;
                else if (s == "-")
                    ans = n2 - n1;
                else if (s == "*")
                    ans = n1 * n2;
                else
                    ans = n2 / n1;
                st.push(ans);
            } else {
                st.push(stoi(s));
            }
        }

        return st.top();
    }
};