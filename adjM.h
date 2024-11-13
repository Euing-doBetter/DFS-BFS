#pragma once
#define MAX_VERTEX 30


typedef struct graphType {
	int n;									
	int adjMatrix[MAX_VERTEX][MAX_VERTEX];  
} graphType;
int visited[MAX_VERTEX];

void createGraph(graphType* g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjMatrix(graphType* g);
void DFS_adjList(graphType* g, int v);