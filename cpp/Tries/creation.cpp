#include<iostream>
using namespace std;


class Trienode{
    public:
    char data;
    Trienode* children[26];
    bool isterminal;


    Trienode(char ch){
        data=ch;

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=false;
    }


};

class Trie{
    public:
    Trienode*root;

    Trie(){
        root=new Trienode('\0');
    }


    void insertuntill(Trienode*root,string word){

        if(word.length()==0){
          root->isterminal=true;
          return;
        }


        int  index=word[0]-'A';
        Trienode*child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }

        else{
            child=new Trienode(word[0]);
            root->children[index]=child;
        }
        insertuntill(child,word.substr(1));
    }

    void insertword(string word){
        insertuntill(root,word);
    }


    bool  searchutill(Trienode* root,string word){
        if(word.length()==0){
            return root->isterminal;
        }

        int idx=word[0]-'A';
        Trienode*child;


        if(root->children[idx]!=NULL){
            child=root->children[idx];
        }


        else{
            return false;
        }

        return searchutill(child,word.substr(1));
    }

    bool searchword(string word){

        return searchutill(root,word);

    }


};
int main(){

    Trie*t=new Trie();
    t->insertword("ABCD");
    t->insertword("ABCD");
    t->insertword("TIME");

    cout<<"Persent or Not "<<t->searchword("ABD")<<endl;
    cout<<"Persent or Not "<<t->searchword("TIME")<<endl;

}