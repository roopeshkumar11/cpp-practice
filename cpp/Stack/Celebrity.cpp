#include<iostream>
#include<vector>
using namespace std;


bool know(vector<vector<int>> &m ,int a,int b,int n){
    if (m[a][b]==1)
    {
        return true;
    }


    else{
        return false;
    }
    
}


int celebrity(vector<vector<int>> &m ,int n){
    stack<int>s;
    for (int i = 0; i < n,size(); i++)
    {
        s.push(i)
    }

    while (s.size()>1)
    {
        int a=s.top();
        s.pop();

        int b=s.top();
    s.pop();


if(know(m,a,b,n)){
    s.push(b)
}


else{
    s.push(a);
}
    }

    int ans=s.top();


    int zerocunt=0;
    for (int  i = 0; i <n; i++)
    {
        if (m[ans][i]==0)
        {
          zerocunt++;
        }
        
    }

        if(zerocount != n)
            return -1;
    int Onecount=0;
    for (int  i = 0; i <n; i++)
    {
        if (m[i][ans]==0)
        {
          Onecount++;
        }
        
    

    if(Onecount != n-1)
            return -1;
        
        return ans;
    } 
    
    
}
int main(){

}