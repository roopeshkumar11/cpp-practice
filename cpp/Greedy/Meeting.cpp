#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}
int maxmeeting(vector<int>&start,vector<int>&end,int n){

  vector<pair<int,int>>st_end;

for(int i=0;i<n;i++){
    st_end.push_back({start[i],end[i]});
}

sort(st_end.begin(),st_end.end(),cmp);


int count=1;

int maxi=st_end[0].second;
for(int i=1;i<n;i++){

    if(st_end[i].first>maxi){
        count++;
        maxi=st_end[i].second;
    }


}

return count;
}



int main(){

    vector<int>start={1,3,0,5,8,5};
    int n=6;
    vector<int>end={2,4,6,7,9,9};


    cout<<maxmeeting(start,end,n);


}