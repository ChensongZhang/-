//北京理工大学上机1
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int W[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char check[11]={'1','0','x','9','8','7','6','5','4','3','2'};
	cout<<"请输入您的十八位身份证号"<<endl;
	char A[17]={'0'};
	cin>>A;
	int num=strlen(A);
	if(num!=18)cout<<"身份证信息输入不全";
	int B[17]={0};
	for(int i=0;i<17;i++)B[i]=(int)A[i]-48;
	int sum=0;
	for(int j=0;j<17;j++)sum+=W[j]*B[j]; 
	int x=sum%11;
	int y=check[x]-48;
	if(check[x]==A[17]){
		cout<<A;
		cout<<" "<<"正确"<<endl;
		return 0; 
	}
	else{
		for(int i=0;i<17;i++)
			cout<<B[i];
		if(check[x]=='x'){ 
			cout<<'x'<<endl;
			cout<<" "<<"正确"<<endl;
		} 
		else{ 
			cout<<y<<endl;
			cout<<" "<<"错误"<<endl;
		}
		return 0;
	}
	return 0;
	
} 
