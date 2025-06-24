#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void shopcandy(vector<int>&candy,int k,int n,int &minprice ,int &maxprice){

    sort(candy.begin(),candy.end());

    minprice=candy[0];

    for(int i=1;i<candy.size()-k;i++){
        minprice+=candy[i];
    }

     maxprice=candy[n-1];
    for(int i=k;i<candy.size()-1;i++){
        maxprice+=candy[i];
    }
}


int main(){

    vector<int>candy={3,2,1,4};
    int n=4;
    int k=2;

    int maxprice=0;
    int minprice=0;

shopcandy(candy,k,n,minprice,maxprice);

    cout<<"minprice: "<<minprice<<" :: "<<"maxiprice: "<<maxprice;

}