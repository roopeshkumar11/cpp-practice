// #include<iostream>  
// #include<vector>
// using namespace std;


// int main(){

//     cout<<"enter number";
//     int n;
//     cin>>n;

//     vector<int>dparray(n+1,-1);
//     dparray[0]=0;
//     dparray[1]=1;

//     for(int i=2;i<=n;i++){
//         dparray[i]=dparray[i-1]+dparray[i-2];
//     }

//     cout<<dparray[n];

// }

//using space optimization



#include<iostream>
#include<vector>
using namespace std;


int main(){

    cout<<"enter number";
    int n;
    cin>>n;


    int prev1=1;
    int prev2=0;
    

    for(int i=2;i<=n;i++){
      int curr=prev1+prev2;
      prev2=prev1;
      prev1=curr;
    }

    cout<<prev1;

}