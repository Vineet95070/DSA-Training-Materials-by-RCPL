#include <iostream>
using namespace std;


class Graph {
private:
    static const int V = 6; 
    int adjMatrix[V][V];    

public:
    // Constructor
    Graph() {
        
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                adjMatrix[i][j] = 0;
            }
        }
    }
    
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; 
    }

    
    void printAdjMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    
	Graph g;
    
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);      
    g.addEdge(2, 5);    
    g.addEdge(3, 2);
    g.addEdge(3, 4);     

   
    g.printAdjMatrix();

    return 0;
}

