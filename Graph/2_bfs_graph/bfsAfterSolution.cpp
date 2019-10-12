#include <iostream>
#include <list>
#include <queue>

using namespace std;


class Graph{
	int nodes;
	list<int> *adj;

public:
	Graph(int nodes){
		this->nodes = nodes;
		adj = new list<int> [nodes];
	}

	void addEdge(int source, int dest){
		adj[source].push_back(dest);
	}

	void BFS(int start){
		bool visited[nodes];
		for(int i = 0; i < nodes; i++){
			visited[i] = false;
		}
		queue<int> myQueue;
		visited[start] = true;
		myQueue.push(start);
		int currentNode;

		list<int> :: iterator i;
		while(myQueue.size() > 0){
			currentNode = myQueue.front();
			cout << currentNode << " ";
			myQueue.pop();
			for(i = adj[currentNode].begin(); i != adj[currentNode].end(); i++){
				if(visited[*i] == false){
					visited[*i] = true;
					myQueue.push(*i);
				}
			}
		}

	}
};

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