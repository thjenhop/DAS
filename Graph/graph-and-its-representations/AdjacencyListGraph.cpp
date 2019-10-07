#include <iostream>
#include <queue> 

using namespace std;

void input();
int main(){
	input();
	return 0;
}
void input(){
	int testcase;
	cin >> testcase;
	for(int k = 0; k < testcase; k++){

		int nodes;
		int edges;
		cin >> nodes;
		cin >> edges;
		//cout << "node: " << nodes << endl;
		//cout << "edges: " << edges << endl;
		int arr[2][edges];
		for(int edge = 0; edge < edges; edge++){
			cin	>> arr[0][edge];
			cin	>> arr[1][edge];
		//	cout << "edge " << edge << ": " << arr[0][edge] << " " << arr[1][edge] << endl;
		}

		for(int i = 0; i < nodes; i++){
			int index = 0;
			queue<int> queuedest;
			
			while(index < edges){
				if(arr[0][index] == i){
					queuedest.push(arr[1][index]);
				}
				if(arr[1][index] == i ){
					queuedest.push(arr[0][index]);	
				}
				index++;
			}
			cout << i ;
			while(queuedest.empty() == false){
				cout << "-> " << queuedest.front();
				queuedest.pop();

			}
			cout << "\n";
		}

	}
	
	
}
