#include <iostream>
#include <string.h> 
using namespace std;
//暴力搜索 
int BF(char str[],char substr[]){
	int m=strlen(str);
	int n=strlen(substr);
	int i=0,j=0;
	while(i<m&&j<n){
		if(str[i]==substr[j]){
			i++;
			j++;
		}
		else{
			i=i-j+1;
			j=0;
		}
	} 
	if(j>=n) return i-n;
	else return 0;
}
int length(char arr[],int pos,int pos1){
	int slength=strlen(arr);
	for(int i=pos1;i<slength;i++)
		arr[pos++]=arr[i];
	return pos;
}
int main(){
	cout<<"input two string"<<endl;
	char str[100],substr[100];
	cin>>str>>substr;
	int pos=BF(str,substr);
	int pos1=pos+strlen(substr);
	int lengthStr=length(str,pos,pos1);
	for(int i=0;i<lengthStr;i++){
		cout<<str[i];
	}
	return 0;
} 
// asdfghj sdfg
