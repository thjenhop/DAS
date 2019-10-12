#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addEdge( vector<int> adj[], int source, int dest);

void BFS(vector<int> adj[], bool visted[], int nodes);

int main(){

	int test_case;
	cin >> test_case;
	int nodes;
	int edges;
	for(int i = 0; i < test_case; i++){
		cin >> nodes;
		cin >> edges;
		vector<int> adj[nodes];
		bool visted[nodes];
		for(int index = 0; index < edges; index++){
			visted[index] = false;
			int source;
			int dest;
			cin >> source;
			cin >> dest;
			addEdge(adj, source, dest);
		}
		cout << endl << "Graph " << i  << endl;
		BFS(adj, visted, nodes);

	}
	cout << "Hello world\n";
	return 0;
}

void addEdge( vector<int> adj[], int source, int dest){
	adj[source].push_back(dest);
	adj[dest].push_back(source);
}

void BFS(vector<int> adj[], bool visted[], int nodes){
	queue<int> myQueue;
	for(int i = 0; i < nodes; i++){

		// myQueue.push(i);
		// int nodesFist = myQueue.front();
		// // check node parent visted or not
		if(visted[i] == false){
			visted[i] = true;
			cout << i << " ";

		}
		int index = 0;
		int lengthList = adj[i].size();
		
		int currentNode;
		// add all node child in queue
		while(index < lengthList){
			currentNode = adj[i][index];
			if(visted[currentNode] == false){
				myQueue.push(currentNode);	
			}
			index++;
		}

		while(myQueue.size() > 0){
			currentNode = myQueue.front();
			cout << currentNode << " ";
			visted[currentNode] = true;
			myQueue.pop();
		}

	}

}

bool checkVistAll(bool visted[], int nodes){
	for(int i = 0; i < nodes / 2; i++){
		if((visted[i] == false) || visted[nodes - 1 - i] == false){
			return false;
		}
	}
	return true;
}