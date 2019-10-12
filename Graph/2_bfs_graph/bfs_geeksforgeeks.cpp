#include <iostream>
#include <list>

using namespace std;

class Graph{

	int vertices; // nodes

	// Pointer to an array containing adjancecy
	// lists
	list<int> *adj;

public:
	Graph(int vertices); // Constructor

	// function to add an edge to graph
	void addEdge(int source, int dest);

	// prints BFS traversal from a give source
	void BFS(int source = 0);
};

Graph::Graph(int vertices) { 
    this->vertices = vertices; 
    adj = new list<int>[vertices]; 
} 
  
void Graph:: addEdge(int source, int dest){
	adj[source].push_back(dest); // add vertex to source's list
}

void Graph::BFS(int source){
	// Mark all the vertices as not visited
	bool *visited = new bool[vertices];
	for(int i = 0; i < vertices; i++){
		visited[i] = false;
	}

	// Create a queue for BFS
	list<int> queue;

	// Mark the current node as visited and enqueue it
	visited[source] = true;
	queue.push_back(source);

	list<int>:: iterator i;

	while(!queue.empty()){
		source = queue.front();
		cout << source << " ";
		queue.pop_front();

		// Get all adjacent of the dequeued
		// vertex source. If a adjacent has not been visited
		// then mark it visited and enqueue it
		for(i = adj[source].begin(); i != adj[source].end(); i++){
			if(visited[*i] == false){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}


int main(){
	int test_case;
	cin >> test_case;
	int nodes;
	int edges;
	for(int i = 0; i < test_case; i++){
		cin >> nodes;
		cin >> edges;
		Graph graph(nodes);
		for(int edge = 0; edge < edges; edge++){
			int source;
			int dest;
			cin >> source;
			cin >> dest;
			graph.addEdge(source, dest);
		}
		cout << "Graph " << i << endl;
		graph.BFS(0);
	}

	cout << "\nHelo world\n";

	return 0;
}
