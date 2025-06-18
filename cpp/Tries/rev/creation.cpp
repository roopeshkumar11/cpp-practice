#include<iostream>
using namespace std;

class TriesNode{
    public:
    char data;
    TriesNode*children[26];
    bool istreminal;



    TriesNode(char ch){
    data=ch;

    for(int i=0;i<26;i++){
        children[i]=NULL;
    }

    istreminal=false;
    }
};

class Tries{
    public:

    TriesNode*root;

    void insertutil(TriesNode*root,string word){

        if(word.length()==0){
            root->istreminal=true;
        }

        int index=word[0]-'A';
        TriesNode*child;

        if(root->children!=NULL){
            child=root->children[index];
        }

        else{
            child=new TriesNode(word[0]);
            root->children[index]=child;
        }
        insertutil(root,word.substr(1));
    }

    void insert(string word){
        insertutil(root,word);
    }
};
int main(){

}
