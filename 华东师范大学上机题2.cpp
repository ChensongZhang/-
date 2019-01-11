#include <iostream>
using namespace std;
void manageNum(int *arr,int n){
	int *b=new int[n+1];
	for(int i=1;i<=n+1;i++)
		b[i]=1;
	for(int i=1;i<=n+1;i++){
	
		if(arr[i]==0)
			continue;
		else{
			int k=i;
			while(arr[k]!=0){
				int j=arr[k];
				b[j]++;
				k=j;
			}
		}
	}
	for(int i=1;i<n+1;i++)
		cout<<b[i]<<" ";
}
int main(){
	cout<<"input number of people in team"<<endl;
	int n=0;
	cin>>n;
	int *arr=new int[n+1];
	for(int i=1;i<n+1;i++){
		cin>>arr[i];
	}
	manageNum(arr,n);

	return 0;
} 
