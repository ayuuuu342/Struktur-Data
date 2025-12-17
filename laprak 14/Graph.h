#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

typedef char infoGraph;

struct ElmNode;
struct ElmEdge;

typedef ElmNode* adrNode;
typedef ElmEdge* adrEdge;

struct ElmNode {
    infoGraph info;      
    int visited;         
    adrEdge firstEdge;   
    adrNode next;        
};

struct ElmEdge {
    adrNode node;        
    adrEdge next;        
};

struct Graph {
    adrNode first;    
};

void createGraph(Graph &G);
adrNode AllocatedNode(infoGraph X);
adrEdge AllocatedEdge(adrNode N);

void InsertNode(Graph &G, infoGraph X);
adrNode findNode(Graph G, infoGraph X);

void ConnectNode(Graph &G, infoGraph A, infoGraph B);

void PrintInfoGraph(Graph G);
void ResetVisited(Graph &G); // dipake agar juga BFS bisa di print bukan cuman DFS aja

void printDFS(Graph &G, adrNode N); // ditambahkan di soal no 2
void printBFS(Graph &G, adrNode N); // ditambahkan di soal no 3

#endif
