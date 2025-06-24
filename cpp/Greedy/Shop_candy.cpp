#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int minimumCost(vector<int> &cost, int n, int k)
{
  int free=n-1;

  int buy=0;
sort(cost.begin(),cost.end());
  int minivalue=0;

  while(buy<=free){

      minivalue+=cost[buy];
      buy++;

      free=free-k;

  }
  return minivalue;

}


int maximumCost(vector<int> &cost, int n, int k)
{
    int free=0;

  int buy=n-1;
  sort(cost.begin(),cost.end());

  int maxivalue=0;

  while(free<=buy){

      maxivalue+=cost[buy];
      buy--;

      free=free+k;

  }
  return maxivalue;
}


int main(){

    vector<int>candy={3,2,1,4};
    int n=4;
    int k=2;

    int maxprice=0;
    int minprice=0;



    cout<<"minprice: "<<minimumCost(candy,n,k)<<" :: "<<"maxiprice: "<<maximumCost(candy,n,k);

}