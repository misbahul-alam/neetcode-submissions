class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < s.length()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            decoded.push_back(s.substr(pos + 1, len));
            i = pos + 1 + len;
        }

        return decoded;
    }
};
