#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addEdge( vector<int> adj[], int source, int dest);

void BFS(vector<int> adj[], bool visted[], int nodes);

void printAdjacentList(vector<int> adj[], int vertexs);

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
			//cout << "source: " << source << ", dest: " << dest << endl;
		}
		cout << endl << "Graph " << i  << endl;
		cout << "AdjacentList\n";
		printAdjacentList(adj, nodes);
		cout << "Result BFS\n";
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

		myQueue.push(i);
		int nodesFist = myQueue.front();
		// check node parent visted or not
		if(visted[nodesFist] == false){
			visted[nodesFist] = true;
			cout << nodesFist << " ";

		}
		myQueue.pop();

		int index = 0;
		int lengthList = adj[i].size();
		
		int currentNode;
		// add all node child in queue
		while(index < lengthList){
			currentNode = adj[i][index];
			if(visted[currentNode] == false){
				myQueue.push(currentNode);
				visted[currentNode] = true;

			}
			index++;
		}

		while(myQueue.size() > 0){
			currentNode = myQueue.front();
			cout << currentNode << " ";
			visted[currentNode] = true;
			myQueue.pop();
		}
		//cout << ". Done node list node " << i << endl;

	}

}

void printAdjacentList(vector<int> adj[], int vertexs){
	
	for(int vertex = 0; vertex < vertexs; vertex++){
		cout << vertex;
		for(int i = 0; i < adj[vertex].size(); i++){
			cout  << "-> " << adj[vertex][i];
		}
		cout << endl;
	}
}