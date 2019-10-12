#include <iostream>
#include <vector>

using namespace std;


void inputGraph(int test_Case);
void addEdge(vector<int> adj[], int source, int dest);
void printGraph(vector<int> adj[], int nodes);


int main(){
	int test_Case;
	cin >> test_Case;
	inputGraph(test_Case);
	
	return 0;
}

void inputGraph(int test_Case){
	for(int i = 0; i < test_Case; i++){
		int nodes;
		cin >> nodes;
		int edges;
		cin	>> edges;
		vector<int> adj[nodes];
		for(int edge = 0; edge < edges; edge++){
			int source;
			cin >> source;
			int dest;
			cin	>> dest;
			addEdge(adj, source, dest);
		}
		printGraph(adj, nodes);
		
	}
	

}
void addEdge(vector<int> adj[], int source, int dest){
	adj[source].push_back(dest);
	adj[dest].push_back(source);
}
void printGraph(vector<int> adj[], int nodes){
	for(int node = 0; node < nodes; node++){
		cout << node;
		for(auto x : adj[node]){
			cout << "-> " << x;
		}
		cout << "\n";
	}
}
