//中南大学上机1
#include <stdio.h>
#include <iostream>
using namespace std;
bool match(char a[]){
	int i=0,j=0;
	char tmp[]={'E','A','S','Y'};
	while(i<1000&&j<3){
		if(a[i]==tmp[j]){
			i++;j++; 
		} 
		else
			i++;
	}
	if(i>=1000)
		return false;
	else 
		return true;
}
int main(){
	cout<<"请输入字符串的组数"<<endl;
	int n=0;
	cin>>n;
	cout<<"输入目标字符串"<<endl;
	char str[][1000]={'0'};
	for(int i=0;i<n;i++)
		cin>>str[i]; 
	for(int i=0;i<n;i++){
		if (match(str[i]))
			cout<<"easy"<<endl;
		else
			cout<<"difficult"<<endl;
	}
	return 0;
}
