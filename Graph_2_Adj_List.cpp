// C++ Program to Implement Adjacency List using Vector

#include <iostream>
#include <vector>
using namespace std;
class Graph {
private:
    // Adjacency list to represent the graph
    vector<vector<int> > adjList;
    // Boolean flag to indicate if the graph is directed
    bool isDirected;

public:
    // Constructor to initialize the graph    
    Graph(int vertices, bool directed = false)
    {
        // Resize the adjacency list to accommodate the vertices        
		adjList.resize(vertices);        
        
		// Set the directed flag
        isDirected = directed;
    }
    // Function to add an edge to the graph    
    void addEdge(int src, int dest)
    {
        // Add the destination to the adjacency list of the source
        adjList[src].push_back(dest);
        
        // If the graph is undirected
        if (!isDirected) {
            // Add the source to the adjacency list of the destination
            adjList[dest].push_back(src);
        }
    }

    // Function to print the adjacency list of the graph
    void printGraph()
    {
        // Iterate through each vertex
        for (int i = 0; i < adjList.size(); ++i) {
            // Print the vertex
            cout << i << ": ";
            // Iterate through the adjacency list of the
            // vertex
            for (int j = 0; j < adjList[i].size(); ++j) {
                // Print each adjacent vertex
                cout << adjList[i][j] << " -> ";
            }
            // Indicate the end of the adjacency list
            cout << "NULL" << endl;
        }
    }
};
int main()
{
    // Number of vertices in the graph
    int vertices = 6;

    // Undirected Graph Example
    Graph undirectedGraph(vertices);   
    
	undirectedGraph.addEdge(1, 2);
    undirectedGraph.addEdge(1, 3);
    undirectedGraph.addEdge(1, 4);
    undirectedGraph.addEdge(2, 3);
    undirectedGraph.addEdge(2, 5);
    undirectedGraph.addEdge(3, 4);

    // Print the adjacency list of the undirected graph
    cout << "Undirected Graph Adjacency List:" << endl;
    undirectedGraph.printGraph();

    cout << endl;

    // Directed Graph Example
    Graph directedGraph(vertices, true);
    directedGraph.addEdge(1, 2);
    directedGraph.addEdge(1, 3);
    directedGraph.addEdge(1, 4);
    
    directedGraph.addEdge(2, 5);
    
    directedGraph.addEdge(3, 2);
    directedGraph.addEdge(3, 4);
    
    
    
    
    // Print the adjacency list of the directed graph
    cout << "Directed Graph Adjacency List:" << endl;
    directedGraph.printGraph();

    return 0;
}
