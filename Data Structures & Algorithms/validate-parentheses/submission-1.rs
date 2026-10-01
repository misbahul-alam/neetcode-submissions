impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack: Vec<char> = Vec::new();
        for c in s.chars() {
            if c == '(' || c == '[' || c == '{' {
                stack.push(c);
            } else {
                if stack.is_empty() {
                    return false;
                }
                let last = stack.pop().unwrap();
                if (c == ')' && last != '(')
                    || (c == ']' && last != '[')
                    || (c == '}' && last != '{')
                {
                    return false;
                }
            }
        }
        stack.is_empty()
    }
}
