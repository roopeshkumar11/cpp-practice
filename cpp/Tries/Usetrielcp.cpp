#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Treinode {
public:
    char data;
    Treinode* children[26];
    int countnode;
    bool Terminal;

    Treinode(char chh) {
        data = chh;
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        countnode = 0;
        Terminal = false;
    }
};

class Trei {
public:
    Treinode* root;

    Trei() {
        root = new Treinode('\0');
    }

    void insertutill(Treinode* root, string word) {
        if(word.length() == 0) {
            root->Terminal = true;
            return;
        }

        int idx = word[0] - 'a';
        Treinode* child;

        if(root->children[idx] != NULL) {
            child = root->children[idx];
        }
        else {
            child = new Treinode(word[0]);
            root->countnode++; 
            root->children[idx] = child;
        }

        insertutill(child, word.substr(1));
    }

    void insertword(string word) {
        insertutill(root, word);
    }

    void lcp(string wrd, string &ans) {
        Treinode* node = root; 
        for(int i = 0; i < wrd.length(); i++) {
            char ch = wrd[i];
            int idx = ch - 'a';

      
            if(node->countnode == 1 && node->Terminal == false) {
                ans += ch;
                node = node->children[idx];
            }
            else {
                break;
            }
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n) {
    Trei* t = new Trei();

    for(int i = 0; i < n; i++) {
        t->insertword(arr[i]);
    }

    string first = arr[0];
    string ans = "";

    t->lcp(first, ans);
    return ans;
}

int main() {
    vector<string> str = {"abcdes", "abchil", "abopo"};
    int n = str.size();

    string result = longestCommonPrefix(str, n);
    cout << "Longest Common Prefix: " << result << endl;
}
