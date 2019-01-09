#include <iostream>
#include <stdlib.h>
using namespace std;
void printSpiralMatrix(int **matrix,int x,int y,int start,int n){
	if(n<=0)return;
	if(n==1){
		matrix[x][y]=start;
		return;
	}
	for(int i=x;i<x+n-1;i++)//top
		matrix[y][i]=start++;
	for(int j=y;j<y+n-1;j++)//right
		matrix[j][x+n-1]=start++;		
	for(int i=x+n-1;i>x;i--)//bottom
		matrix[y+n-1][i]=start++;
	for(int j=y+n-1;j>y;j--)//left
		matrix[j][x]=start++;
	printSpiralMatrix(matrix,x+1,y+1,start,n-2);					
} 
int searchNum(int **matrix,int i,int j){
	return matrix[i-1][j-1];
}
int main(){
	cout<<"input number of lines of matrix";
	int n=0;
	cin>>n;
	int **matrix=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<n;i++)
		matrix[i]=(int*)malloc(n*sizeof(int));
	printSpiralMatrix(matrix,0,0,1,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%5d",matrix[i][j]);
		cout<<endl;
	}
	return 0;
} 
