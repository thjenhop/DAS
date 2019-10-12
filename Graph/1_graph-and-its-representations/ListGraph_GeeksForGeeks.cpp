// A simple representation of graph using STL 
#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int source, int dest);
void printGraph(vector<int> adj[], int nodes);

int main(){
	int nodes = 5;
	vector<int> adj[nodes];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, nodes);
	return 0;
}

// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int source, int dest){
	adj[source].push_back(dest);
	adj[dest].push_back(source);
}

// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int nodes){
	for(int node = 0; node < nodes; node++){
		cout << "\n Adjacency list of vertex "
             << node << "\n head "; 
        for (auto x : adj[node]){
        	cout << "-> " << x;
		}	
		cout << "\n";
    }
}