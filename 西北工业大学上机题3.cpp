#include <iostream>
#include <cstring>
using namespace std;
#define MAXSIZE 1000
void check(int T){
	char str[MAXSIZE];
	while(T--);
	int flag=1;
	int fz=0,fy=0,yz=0,yy=0;
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		switch(str[i]){
			case'[':fz++;break;
			case']':fy++;break;
			case'(':yz++;break;
			case')':yy++;break;
		}
		if (i==0)
			continue;
		else if(str[i]==']'&&str[i-1]=='('){
			flag=0;break;
		}
		else if(str[i]==')'&&str[i-1]=='['){
			flag=0;break;
		}		
	}
	if(fz!=fy||yz!=yy) 
		flag=0;
	if(flag==1)
		printf("yes\n");
	else
		printf("no\n");
}
int main(){
	int t=0;
	cin>>t;
	check(t);
	return 0;	
}
