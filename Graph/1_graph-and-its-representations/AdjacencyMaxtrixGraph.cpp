#include <iostream>
#include<iomanip>

using namespace std;

void inputGraph(int test_case);
//void prindGraph(int nodes, int arr[][nodes]);

int main(){
	int test_case;
	cin >> test_case;
	inputGraph(test_case);
	return 0;
}

void inputGraph(int test_case){
	for(int i = 0; i < test_case; i++){
		int nodes;
		cin >> nodes;
		int edges;
		cin >> edges;
		int arr[nodes][nodes];

		for(int i = 0; i < nodes; i++){
			for(int j = 0; j < nodes; j++){
				arr[i][j] = 0;
			}
		}

		for(int edge = 0; edge < edges; edge++){
			int source;
			cin >> source;
			int dest;
			cin >> dest;
			arr[source][dest] = 1;
			arr[dest][source] = 1;
		}
		
		cout << "Result graph:" <<  i  << "\n    ";
		cout << left;
		for(int node = 0; node < nodes; node++){
			cout << setw(4) << node;
		}
		cout << "\n";

		for(int i = 0; i < nodes; i++){
			cout << setw(4) << i;
			for(int j = 0; j < nodes; j++){
				cout << setw(4) << arr[i][j];
			}
			cout << "\n";
		}

	}

}
// void prindGraph(int nodes, int arr[][nodes]){
// 	cout << setw(4);
// 	cout << left;
// 	for(int i = 0; i < nodes; i++){
// 		cout << setw(4) << nodes;
// 	}
// 	cout << "\n";

// 	for(int i = 0; i < nodes; i++){
// 		cout << setw(4) << i;
// 		for(int j = 0; j < nodes; j++){
// 			cout << setw(4) << arr[i][j];
// 		}
// 		cout << "\n";
// 	}
// }