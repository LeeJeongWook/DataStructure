#include <stdio.h>
#define V 4

void addEdge(int graph[V][V], int src, int dest) {
    graph[src][dest] = 1;
    graph[dest][src] = 1;  // 무방향 그래프
}

void printGraph(int graph[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[V][V] = {0};
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    printGraph(graph);
    return 0;
}
