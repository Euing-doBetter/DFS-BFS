#define TRUE 1
#define FALSE 0
#include "adjM.h"
#include "BFS.h"
typedef int element;

void BFS_adjList(graphType* g, int v) {
	
	int u;
	QueueType LQ;

	Q_init(&LQ);
	visited[v] = TRUE;
	printf("%c", v + 65);
	enLQueue(&LQ, v);
	while (!Q_empty(&LQ)) {
		v = deLQueue(&LQ);
		for (u = 0; u < g->n; u++) {
			if (g->adjMatrix[v][u] && !visited[u]) {
				visited[u] = TRUE;
				printf("->%c", u + 65);
				enLQueue(&LQ, u);
			}
		}
	}
}