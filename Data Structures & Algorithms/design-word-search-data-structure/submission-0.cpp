class Node {
public:
    char value;
    unordered_map<char, Node*> children;
    bool isEnd;

    Node(char val) {
        value = val;
        isEnd = false;
    }
};

class WordDictionary {
public:
    Node* root;
    WordDictionary() { root = new Node(' '); }
    bool searchHelper(Node* node, const string& word, int index) {
        if (word.size() == index)
            return node->isEnd;
        char ch = word[index];

        if (ch == '.') {
            for (auto& [key, val] : node->children) {
                if (searchHelper(node->children[key], word, index + 1))
                    return true;
            }

            return false;
        } else {
            if (node->children.find(ch) == node->children.end()) {
                return false;
            }

            return searchHelper(node->children[ch], word, index + 1);
        }
    }
    void addWord(string word) {
        Node* current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new Node(ch);
            }
            current = current->children[ch];
        }
        current->isEnd = true;
    }

    bool search(string word) { return searchHelper(root, word, 0); }
};

