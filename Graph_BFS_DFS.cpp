#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// BFS function
void BFS(int G[][7], int start, int n) {
    vector<int> visited(n, 0); // Initialize visited nodes
    queue<int> q;

    cout << start << " ";
    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int i = q.front();
        q.pop();

        for (int j = 1; j < n; j++) {
            if (G[i][j] == 1 && visited[j] == 0) {
                cout << j << " ";
                visited[j] = 1;
                q.push(j);
            }
        }
    }
}

// DFS function
void DFS(int G[][7], int start, int n, vector<int>& visited) {
    if (visited[start] == 0) {
        cout << start << " ";
        visited[start] = 1;

        for (int j = 1; j < n; j++) {
            if (G[start][j] == 1 && visited[j] == 0) {
                DFS(G, j, n, visited);
            }
        }
    }
}

int main() {
    int G[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    cout << "DFS Traversal: ";
    vector<int> visited(7, 0);
    DFS(G, 1, 7, visited);
    cout << endl;

    cout << "BFS Traversal: ";
    BFS(G, 4, 7);
    cout << endl;

    return 0;
}
