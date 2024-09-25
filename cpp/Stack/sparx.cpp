#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    
    vector<int>ans;
    vector<vector<int>> matrix = {
        {1, 2, 3, 45},
        {7, 24, 13, 8},
        {9, 10, 11, 12}
    };

  
   
        for (int j = 0; j < matrix.size()+1; ++j) {
            // ans.push_back(matrix[0][j]); 
                //  ans.push_back(matrix[j][3]);
                //  ans.push_back(matrix[2][2-j]);
                 ans.push_back(matrix[1][j]);
            
            
        
        cout << endl;
    }
  for (int i = 0; i < ans.size(); i++)
  {
   
        cout<<ans[i]<<endl;
    
    
  }
  

    return 0;
}
