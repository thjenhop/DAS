/* Start day code 14/10/2019 
   source consult: BFS from geeksforgeeks
*/

#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Graph{

	int vertices;

	list<int> *adj;

public:
	Graph(int vertices){
		this->vertices = vertices;
		adj = new list<int> [vertices];
	}
	void addEdge(int source, int dest){
		adj[source].push_back(dest);
		adj[dest].push_back(source);
	}
	
	void DFS(int source){
		bool *visited = new bool[vertices];
		for(int i = 0; i < vertices; i++){
			visited[i] = false;
		}
		stack<int> myStack;
		myStack.push(source);
		visited[source] = true;
		stack<int> stackStore;
		while(myStack.size() > 0){
			int vertex = myStack.top();
			myStack.pop();

			cout << vertex << " ";
			list<int>:: iterator i;
			for( i = adj[vertex].begin(); i != adj[vertex].end(); i++){
				if(visited[*i] == false){
					visited[*i] = true;
					stackStore.push(*i);
				}
			}
			while(stackStore.size() > 0){
				myStack.push(stackStore.top());
				stackStore.pop();
			}
		}
		

		

	}
	void printAdjacent(){

		for(int i = 0; i < vertices; i++){
			list<int>:: iterator j;
			cout << i;
			for(j = adj[i].begin(); j != adj[i].end(); j++){
				cout << "-> " << *j;
			}
			cout << endl;
		}
	}
};

int main(){

	int test_case;
	cin >> test_case;
	for(int i = 0; i < test_case; i++){
		int nodes;
		int edges;
		cin >> nodes;
		cin >> edges;
		Graph g(nodes);
		for(int edge = 0; edge < edges; edge++){
			int source;
			int dest;
			cin >> source;
			cin >> dest;
			g.addEdge(source, dest);
		}
		cout << "Adj graph " << i << endl;
		g.printAdjacent();
		cout << "DFS graph " << i << endl;
		g.DFS(0);


	}
	cout << "Hello world\n";
	return 0;
}
