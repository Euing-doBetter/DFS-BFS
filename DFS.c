#include <stdio.h>
#include "adjM.h"
#include "DFS.h"


void DFS_adjList(graphType* g, int v) {
					
						
	visited[v] = 1;
	printf(" ->%c", v+65);
	int i = 0;
	for (i = 0; i < (g->n); i++) {

		if (g->adjMatrix[v][i] && !visited[i]) {

			DFS_adjList(g, i);

		}


	}

}