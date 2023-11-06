#include <iostream>
using namespace std;

int cost[10][10], n, stk[10], visited1[10], visit1[10], k;

void dfs(int y) {
    int top=0;
    cout << "DFS ORDER OF VISITED VERTICES: ";
    cout << y << " ";
    visited1[y] = 1;
    k = 1;
    while (k < n) {
        for (int j = n; j >= 1; j--) {
            if (cost[y][j] != 0 && visited1[j] != 1 && visit1[j] != 1) {
                visit1[j] = 1;
                stk[top] = j;
                top++;
            }
        }
        y = stk[--top];
        cout << y << " ";
        k++;
        visit1[y] = 0;
        visited1[y] = 1;
    }
}

int main() {
    int m, y;
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
    cin >> y;
    dfs(y);

    return 0;
}
