//北京理工大学上机2
#include <iostream>
using namespace std;
int count_num=0; 
int binarySearch(int a[],int n,int key){
	int low=0,high=n-1;
	while(low<=high){
		count_num++;
		int mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>key)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
int main(){
	int a[10]={-36,-25,0,12,14,29,35,47,76,100};
	cout<<"请输入需要查找的数"<<endl;
	int num=0;
	cin >>num;
	int n=binarySearch(a,10,num);
	if(n>=0)cout<<num<<"是第"<<n+1<<"个数"<<"查找次数为"<<count_num<<endl; 
	else cout<<"查找失败"<<endl; 
	return 0;
} 
