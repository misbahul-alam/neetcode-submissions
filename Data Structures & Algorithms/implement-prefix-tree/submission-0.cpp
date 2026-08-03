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

class PrefixTree {
public:
    Node* root;
    PrefixTree() {
        root = new Node(' ');
    }
    
    void insert(string word) {
        Node* current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new Node(ch);
            }
            current = current->children[ch];
        }
        current->isEnd = true;
    }
    
    bool search(string word) {
        Node* current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* current = root;

        for (char ch : prefix) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return true;
    }
};
