#include <iostream>
using namespace std;

#include "DijkstraNodes.h"
using namespace DjikstraNodes;

// Dijkstra Search Ran Here

int main() {

	//Create the Nodes/Vertices
	Vertex* a = new Vertex();
	Vertex* b = new Vertex();
	Vertex* c = new Vertex();
	Vertex* d = new Vertex();
	Vertex* e = new Vertex();
	Vertex* f = new Vertex();

	//Create the Edges from Node to Node
	a->connections.push_back(Edge(b, 30));
	a->connections.push_back(Edge(c, 10));
	a->connections.push_back(Edge(d, 16));
	a->connections.push_back(Edge(e, 25));
	
	b->connections.push_back(Edge(c, 30));
	b->connections.push_back(Edge(d, 10));
	b->connections.push_back(Edge(f, 30));

	c->connections.push_back(Edge(e, 12));

	d->connections.push_back(Edge(f, 10));

	e->connections.push_back(Edge(f, 4));

	//Run Dijkstra To Show Shortest Path
	std::vector<Vertex*> shortestPath = DijikstrasSearch(a, f);

	for (Vertex* vertex : shortestPath) {
		std::cout << vertex->gScore << std::endl;
	}

	//Path should display: 0 >> 10 >> 22 >> 26
	













}