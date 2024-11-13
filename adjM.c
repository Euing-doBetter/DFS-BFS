#include <stdio.h>
#include <stdlib.h>
#include "adjM.h"
#define TRUE 1
#define FALSE 0
#define MAX_VERTEX 30

void createGraph(graphType* g) {
	int i, j;
	g->n = 0;								// ���� ������ 0���� �ʱ�ȭ
	for (i = 0; i < MAX_VERTEX; i++) {
		for (j = 0; j < MAX_VERTEX; j++)
			g->adjMatrix[i][j] = 0;			// �׷��� g�� ���� 2���� �迭�� ���� 0���� �ʱ�ȭ
	}
}

// �׷��� g�� ���� v�� �����ϴ� ����
void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
		return;
	}
	g->n++; // �׷��� ������ ���� n�� �ϳ� ����
}

// �׷��� g�� ���� (u, v)�� �����ϴ� ����
void insertEdge(graphType* g, int u, int v) {
	// ���� (u, v)�� �����ϱ� ���� ���� u�� v�� �׷����� �����ϴ��� Ȯ��
	if (u >= g->n || v >= g->n) {
		printf("\n �׷����� ���� �����Դϴ�!");
		return;
	}
	g->adjMatrix[u][v] = 1;// ������ ������ ���� 2���� �迭�� ���� ���� 1�� ����
}

// �׷��� g�� 2���� �迭 ���� ������� ����ϴ� ����
void print_adjMatrix(graphType* g) {
	int i, j;
	for (i = 0; i < (g->n); i++) {
		//printf("\n\t\t");
		printf("\n\t\t���� %c�� ���� ���", i + 65);
		for (j = 0; j < (g->n); j++)
			printf("%2d", g->adjMatrix[i][j]);
	}
}