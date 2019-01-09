#include <iostream>
using namespace std;
int find(int s[],int x){
	while(s[x]!=x)
		x=s[x];
	return x;
}
void initial(int *a,int n){
	for(int i=0;i<=n;i++)a[i]=i;
}
void union1(int s[],int x,int y){
	int fx=find(s,x),fy=find(s,y);
	if(fx!=fy)s[fx]=fy;
}
int find_ans(int s[],int n){
	int sum=0;
	for(int i=1;i<n;i++)
		if(s[i]==i)++sum;
	return sum;
}
int main(){
	cout<<"input number of towns and roads";
	int m=0,n=0;
	cin>>n>>m;
	int *arr=new int[n+1];
	initial(arr,n);
	int a=0,b=0;
	while(n!=EOF){
		if(!n) break;
		initial(arr,n);
		for(int i=0;i<m;i++){
			cin>>a>>b;
			union1(arr,a,b);
		}
		printf("%d\n",find_ans(arr,n));
	}
	return 0;
} 
