#include <iostream>
using namespace std;
int countNum=1;
bool judge(int force){
	if(force>0&&force<50)
		return true;
	else return false;
}
bool isPrime(int n){
	if(n==1)
		return false;
	if(n==2)
		return true;
	if(n%2==0)
		return false;
	 
	for(int i=3;i<n;i+=2){
		if(n%i==0)
			return false;
	}
	return true;
} 
bool passNum(int x,int y){
	int sum=(x-y)*(x-y)+(x-y)+41;
	if(isPrime(sum)){
		countNum++;
		return true;
	}
	return false;
}

int main(){
	cout<<"input power number of guanyu and other warriors"<<endl;
	int x=0,y1=0,y2=0,y3=0;
	cin>>x>>y1>>y2>>y3;
	while(!judge(x)||!judge(y1)||!judge(y2)||!judge(y3)){
		cout<<"try again"<<endl;
		cin>>x>>y1>>y2>>y3;
	}	
	if(!passNum(x,y1)){
		cout<<countNum<<endl;
		return 0;
	}
	if(!passNum(x,y2)){
		cout<<countNum<<endl;
		return 0;
	}
	if(!passNum(x,y3)){
		cout<<countNum<<endl;
		return 0;
	}
	else
		cout<<"win"<<endl;
	return 0;
} 
