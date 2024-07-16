#include <iostream>
#include <string>
using namespace std;

int romanToInt(int ch) {
    switch(ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }}

int main(){
int i;
int sum=0;

string a;
cout<<"enter input";
cin>>a;
int size=a.length();

for( i=0;i<size;i++){

  
sum=sum+romanToInt(a[i]);

}
cout<<sum;




}