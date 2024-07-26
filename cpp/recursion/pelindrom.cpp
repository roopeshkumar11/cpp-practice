#include<iostream>
using namespace std;
bool pelindrom(string str, int i,int j){
    if (i>j)
    
        return true;
    
   if (str[i]!=str[j])
   {
    return false;
   }
   else{
   return pelindrom(str ,i+1,j-1);
   }



}
int main(){

    string str;
    cout<<"enter string ";
    cin>>str;
    bool ans=pelindrom(str,0,str.length()-1);

   if (ans)
   {
    cout<<"pelindrom";
   }
   else{
    cout<<"not pelindrom";
   }
   


}