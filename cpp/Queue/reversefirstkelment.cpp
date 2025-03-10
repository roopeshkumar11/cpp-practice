#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> modifyqueue(queue<int> q, int k) {
    stack<int> st;

  
    for (int i = 0; i < k; i++) {
        int val = q.front();
        q.pop();
        st.push(val);
    }


    while (!st.empty()) {
        int tp = st.top();
        st.pop();
        q.push(tp);
    }

    int t = q.size() - k;
    while (t--) {
        int f = q.front();
        q.pop();
        q.push(f);
    }

    return q;
}

int main() {
    queue<int> q;
    int n, k;

    cout << "Enter the number of elements in the queue: ";
    cin >> n;

    cout << "Enter the elements of the queue: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << "Enter the value of k: ";
    cin >> k;

    

    queue<int> modifiedQueue = modifyqueue(q, k);

    cout << "Modified queue: ";
    while (!modifiedQueue.empty()) {
        cout << modifiedQueue.front() << " ";
        modifiedQueue.pop();
    }
    cout << endl;

    return 0;
}
