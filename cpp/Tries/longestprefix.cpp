#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestprefix(vector<string>& arr, int n) {
    string ans = "";

    for(int i = 0; i < arr[0].size(); i++) {
        char ch = arr[0][i];

        bool match = true;

        for(int j = 1; j < n; j++) {
            // Fixed this condition:
            if(arr[j].size() <= i || ch != arr[j][i]) {
                match = false;
                break;
            }
        }

        if(match == false) {
            break;
        } else {
            ans.push_back(ch);
        }
    }

    return ans;
}

int main() {
    vector<string> str = {"abcdes", "abchil", "abopo"};
    int n = str.size();

    string result = longestprefix(str, n);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
