#pragma once
#include <vector>
#include <algorithm>

using namespace std;

namespace DjikstraNodes{

	struct Vertex;

	struct Vector2 {
		float x;
		float y;
	};

	struct Edge {
		Edge() { target = nullptr; cost = 0; }
		Edge(Vertex* _target, float _cost) : target(_target), cost(_cost) {}

		Vertex* target;
		float cost;
	};

	struct Vertex {
		Vertex(){}
		Vertex(float x, float y) { position.x = x; position.y = y; gScore = 0; previous = nullptr }

		Vector2 position;
		float gScore;
		Vertex* previous;
		vector<Edge> connections;

		void ConnectTo(Vertex* other, float cost);
	};

	vector<Vertex*> DijikstrasSearch(Vertex* startNode, Vertex* endNode);
}