#include <iostream>
using namespace std;
#define MAX_TREE_SIZE 100
typedef struct{
	char data;
	int parent;
}PTNode;
typedef struct{
	PTNode nodes[MAX_TREE_SIZE];
	int n;
}PTree;
int GetLeavesCount(PTree T){
	int count=0;
	for(int i=0;i<T.n;i++){
		for(int j=0;j<T.n;i++){
			if(i==j)
				continue;
			else if(T.nodes[j].parent==i){
				count++;
				break;
			}
		}
		return T.n-count;
	}	
}
int main(){
	cout<<"please input number of nodes of tree"<<endl;
	int n=0;
	cin>>n;
	PTree pt;
	pt.n=n;
	cout<<"please input detail of every node"<<endl;
	for(int i=0;i<n;i++){
		cin>>pt.nodes[i].data;
		cin>>pt.nodes[i].parent;
	}
	int leaves=GetLeavesCount(pt);
	cout<<leaves<<endl;
	return 0;
}
