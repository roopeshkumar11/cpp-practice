#include<iostream>
using namespace std;

int countbit(int num){
    int count=0;
    
    while(num>0){
        if(num&1){     // num & 1 is check odd bit same as num%2==1 
            count++;
        }

        num=num>>1;   // num=num/2 both are same
    }

    return count;
}
int main(){

    cout<<countbit(40);
    

}