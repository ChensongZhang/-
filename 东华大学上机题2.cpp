#include <iostream>
using namespace std;
void deleteSame(int a[],int n){
	int i,j;
	for(i=0,j=1;j<n;j++)
		if(a[i]!=a[j])
			a[++i]=a[j];
	for(int k=0;k<(i+1);k++)
		cout<<a[k]<<" ";
	cout<<endl;
}
void deleteSame1(int a[],int n){
	int *b=new int[n];
	int i=0,k=0;
	b[0]=a[0];
	while(i<n){
		if(a[i]==b[k]){
			i++;continue;
		}
		else{
			b[++k]=a[i++];
		}
	}
	for(int j=0;j<=k;j++){
		cout<<b[j]<<" ";
	}
	cout<<endl;
}
int main (){
	int a[100]={0};
	int n=0;
	cout<<"please input number of array element"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];		
	deleteSame1(a,n);
	return 0;
}
