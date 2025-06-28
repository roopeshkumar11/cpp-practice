#include<iostream>
#include<vector>
using namespace std;

class Graph {
public:
    int nodes;
    vector<vector<int>> adjMatrix;

    Graph(int n) {
        nodes = n;
        adjMatrix.resize(n, vector<int>(n, 0)); 
    }

    void addedge(int u, int v, bool direction) {
        adjMatrix[u][v] = 1;

        if (direction == 0) {
            adjMatrix[v][u] = 1;
        }
    }

    void printMatrix() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < nodes; ++i) {
            cout<<i<<"->"<<" ";
            for (int j = 0; j < nodes; ++j) {
                
                
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m;
    cout << "Enter number of nodes: ";
    cin >> m;

    int n;
    cout << "Enter number of edges: ";
    cin >> n;

    Graph g(m);

    cout << "Enter each edge as a pair of nodes (u v):\n";
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 1); 
    }

    g.printMatrix();

    return 0;
}
