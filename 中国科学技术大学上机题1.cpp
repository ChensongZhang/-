#include <iostream>
#include <math.h>
using namespace std;
int findmax(int *arr,int n){
	int max=arr[0];
	for(int i=1;i<n;i++){	
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<max<<" ";
	return max;
}
int findmin(int *arr,int n){
	int min=arr[0];
	for(int i=1;i<n;i++){	
		if(arr[i]<min)
			min=arr[i];
	}
	cout<<min<<" ";
	return min;
}
int division(int a,int b){
	if(b>a){
		int temp=a;
		a=b;
		b=temp;
	}
	while(1){
		int p=a%b;
		if(p==0)
			return b;
		else{
			a=b;
			b=p;
		}
	}
}
int multinum(int a,int b){
	int sp=division(a,b);
	return a*b/sp;
}
int main(){
	cout<<"input number of data\n";
	int n=0;
	cin>>n;
	int *arr=new int [n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int a=findmin(arr,n);
	int b=findmax(arr,n);
	int spilt=division(a,b);
	int sp=multinum(a,b);
	cout<<spilt<<" "<<sp<<endl;
}
