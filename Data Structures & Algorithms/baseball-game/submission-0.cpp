class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string ch : operations) {
            if (ch == "C") {
                st.pop();
            } else if (ch == "D") {
                int tp = st.top();
                st.push(tp * 2);
            } else if (ch == "+") {
                int tp = st.top();

                st.pop();
                int sm = tp + st.top();
                st.push(tp);
                st.push(sm);
            } else {
                st.push(stoi(ch));
            }
        }
        int sum = 0;

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};