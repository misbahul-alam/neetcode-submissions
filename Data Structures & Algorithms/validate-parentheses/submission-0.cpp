class Solution {
public:
	bool isValid(string s) {
		stack < char > st;

		for (char ch: s) {
			if (ch == ')' || ch == '}' || ch == ']') {
				if (st.empty())
					return false;
				char last = st.top();
				st.pop();
				if (ch == ')' && last != '(')
					return false;
				else if (ch == '}' && last != '{')
					return false;
				else if (ch == ']' && last != '[')
					return false;
			} else {
				st.push(ch);
			}
		}

		return st.empty();

	}
};