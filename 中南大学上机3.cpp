//中南大学上机3
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int compute(double a[][2],int n,int T){
	int sum1=0,sum=0,sum2=0;
	for(int i=0;i<n;i++)
		sum1+=(int)a[i][1];
	if(sum1>T){
		for(int j=0;j<n-1;j++){
			T-=(int)a[j][1];
			if(T>0);
				sum+=(int)(a[j][0]*a[j][1]);
			int i=j+1;
			if(i<n&&T<a[i][1])
				sum+=(int)(T*a[i][0]);
		}
	}
	else{
		for(int k=0;k<n;k++)
			sum2+=(int)(a[k][1]*a[k][0]);
		T=T-sum1;
		sum=sum2+T;
	}
	return sum;
} 
int main(){
	cout<<"输入总人数"<<endl;
	int n=0;
	scanf("%d",&n);
	cout<<"请输入消费的总金额T"<<endl;
	int T=0;
	cin>>T;
	double a[100][2];
	cout<<"输入每个人的折扣率和折扣上限"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i][0];
		cin>>a[i][1];
	 } 
	int sum=0;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j-1][0]>a[j][0]){
				double tmp =a[j-1][0];
				double tmp1=a[j-1][1];
				a[j-1][0]=a[j][0];
				a[j][0]=tmp;
				a[j-1][1]=a[j][1];
				a[j][1]=tmp1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i][0]<<",";
		cout<<a[i][1]<<endl;
	}
	sum=compute(a,n,T);
	cout<<sum<<endl;		
	return 0;
}
