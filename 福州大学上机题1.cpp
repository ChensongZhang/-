#include <iostream>
using namespace std;

int main(){
	cout<<"input number of element"<<endl;
	int n=0;
	cin>>n;
	cout<<"input element of the array"<<endl;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"input the section you want to calculate"<<endl;
	int p=0,q=0;
	cin>>p>>q;
	int sum=0;
	for(int i=p;i<q+1;i++)
		sum+=a[i];
	cout<<sum<<endl;
	return 0;
} 
