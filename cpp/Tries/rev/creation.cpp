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
int main(){

}
