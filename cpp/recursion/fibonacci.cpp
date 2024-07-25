#include<iostream>
using namespace std;

int fib(int n){
    if (n==0)
    {
      return 0;  
    }
    if (n==1)
    {
        return 1;
    }
    int fibonaci= fib(n-1)+fib(n-2);
    return fibonaci;
    
}
int main(){
    int n;
    cin>>n;
   int ans=fib(n);
   cout<<ans;

}