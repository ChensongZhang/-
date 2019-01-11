#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100
char map[MAX][MAX],mapb[MAX][MAX];
char temp[MAX][MAX];
int M,N,s,t;
int Max,ans;
bool judge(char map[][MAX],int i,int j){
	int x=i,y=j;
	for(i=0;i<s;i++)
		for(j=0;i<t;j++)
			if(map[x+i][y+j]!=mapb[i][j])
				return false;
	printf("yes"); 
	return true;
}
void init_temp(int x,int y){
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			temp[i][j]=map[i][j];
	for(int i=0;i<s;i++)
		for(int j=0;j<t;j++)
			temp[x+i][y+j]='0'; 
}
void dfs(char map[][MAX],int x,int y,int Max){
	if(ans<Max)
		ans=Max;
	if(x>=M){
		return;
	}
	for(int i=y;i<N;i++){
		if(judge(map,x,i)){
			init_temp(x,i);
			dfs(temp,x,i+t,Max+1);
		}
	}
	dfs(map,x+1,0,Max);
}
int main(){
	cin>>M>>N;
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			cin>>map[i][j];
	cin>>s>>t;
	for(int i=0;i<s;i++)
		for(int j=0;j<t;j++)
			cin>>mapb[i][j];
	ans=0;Max=0;
	dfs(map,0,0,0);
	cout<<ans<<endl;
	return 0;
} 
/*
3 4
a b c d
c d a b
a c c d
2 2
a b
c d
*/
