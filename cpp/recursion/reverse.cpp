#include<iostream>
using namespace std;
int reverse(string& str, int i,int j){
    if (i>j)
    
        return 0;
    
    swap(str[i],str[j]);
    i++;
    j--;


reverse(str,i,j);
}
int main(){

    string str="roopesh";
    int size=str.length();
   reverse(str,0,size-1);
   cout<<str;


}