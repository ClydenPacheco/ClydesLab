#include <iostream>
using namespace std;

int cost[10][10], n, qu[10], visited[10], visit[10], k;

void bfs(int v) {
    int front = 0, rear = 0;
    cout << "BFS ORDER OF VISITED VERTICES: ";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < n) {
        for (int j = 1; j <= n; j++) {
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1) {
                visit[j] = 1;
                qu[rear] = j;
                rear++;
            }
        }
        v = qu[front++];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
}

int main() {
    int m, v;
    cout << "Enter no of vertices: ";
    cin >> n;
    cout << "Enter no of edges: ";
    cin >> m;
    cout << "\nEDGES\n";

    for (int k = 1; k <= m; k++) {
        int i, j;
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "Enter initial vertex to traverse from: ";
    cin >> v;
    bfs(v);

    return 0;
}
