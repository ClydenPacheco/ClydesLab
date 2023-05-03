#include<iostream>
#include<limits.h>
using namespace std;
int V,last=-1;
int minDistance(int dist[], bool sptSet[]) {
	int min = INT_MAX, min_index=0;
	for (int v = 0; v < ::V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	return min_index;
}
void printPath(int parent[], int j) {
	if (parent[j] == -1)
		return;
	printPath(parent, parent[j]);
	cout << "->" << j;
}
void printSolution(int dist[], int parent[], int src) {
	cout << "\nVertex \t   Distance \tPath" << endl;
	for (int i = 0; i < ::V; i++) {
		if (i == src) {
			printf("%d(Src) %9d %10d\n", src, dist[i], src);
		}
		else {
			printf("%d->%d %11d %10d", src, i, dist[i], src);
			printPath(parent, i);
			cout << endl;
		}
	}
}
void dijkstra(int graph[20][20], int src) {
	int dist[20];
	bool sptSet[20];
	int parent[20] = { -1 };
	for (int i = 0; i < ::V; i++) {
		dist[i] = INT_MAX;
		if(i!=src)
			cout << "dist[" << i << "] = INF\n";
		sptSet[i] = false;
	}
	dist[src] = 0;
	for (int count = 0; count < ::V; count++) {
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		if (count != ::V - 1) {
			for (int v = 0; v < ::V; v++) {
				if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX) {
					(dist[v] == INT_MAX ? cout << "INF" : cout << dist[v]);
					if (dist[u] + graph[u][v] < dist[v]) {
						parent[v] = u;
						dist[v] = dist[u] + graph[u][v];
					}
				}
			}
		}
	}
	printSolution(dist, parent, src);
}
int main() {
	cout << "Enter the number of vertices: ";
	cin >> ::V;
	cout << "Enter the adjacency matrix of the graph:\n";
	cout << "Enter '0' if there is no outgoing edge to the adjacent vertex.\n\n";
	int graph[20][20];
	for (int i = 0; i < ::V; i++) {
		cout << "Enter the distance from vertex (" << i << ") to\n";
		for (int j = 0; j < ::V; j++) {
			if (i == j)
				graph[i][j] = 0;
			else {
				cout << "Vertex (" << j << "): ";
				cin >> graph[i][j];
			}
		}
	}
	cout << "The entered adjacency matrix is:\n";
	cout << "   ";
	for (int i = 0; i < ::V; i++) {
		if (i == ::V - 1) {
			printf("%3d", i);
			break;
		}
		printf("%3d ", i);
	}
	cout << endl;
	for (int i = 0; i < ::V; i++) {
		cout << i <<" |";
		for (int j = 0; j < ::V; j++) {
			if (j == V - 1) {
				printf("%3d ", graph[i][j]);
				break;
			}
			printf("%3d ", graph[i][j]);
		}
		cout << "|" << endl;
	}
	cout << "Which vertex would you like to enter as the source vertex? ";
	int src;
	cin >> src;
	cout << endl;
	cout << "Running Dijkstra's Algorithm...\n";
	dijkstra(graph, src);
	return 0;
}
