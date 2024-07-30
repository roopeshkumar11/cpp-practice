 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int> v;
    cout<<"Size of vector "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size of vector "<<v.capacity()<<endl;  //capacity show how much space take elemnet and size show how element 
     v.push_back(2);
     cout<<"Size of vector "<<v.capacity()<<endl;
v.push_back(2);
v.push_back(2);
v.push_back(2);

cout<<"2nd elemnet of vetor "<<v.at(2)<<endl;

v.pop_back();
for (
    int i = 0; i <v.size(); i++)
{
    cout<<v[i]<<endl;
}

cout<<"before clear size "<<v.size()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;

// initaliztion of array;

vector<int >a(5,1);  //1 aign value of a;
for (int i = 0; i < 5; i++)
{
    cout<<"elemet of array a  "<<a[i]<<endl;
}

 }