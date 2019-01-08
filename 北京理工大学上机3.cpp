//北京理工大学上机3
#include <iostream>
using namespace std;
typedef struct{
	char name[20];
	float score1;
	float score2;
	float score3;
	int total; 
}Student;
void swap(Student s[],int i,int j){
	Student temp=s[i];
	s[i]=s[j];
	s[j]=temp; 
}
void find_fail(Student s[],int n){
	for(int i=0;i<n;i++){
		if(s[i].score1<60||s[i].score2<60||s[i].score3<60){
			cout<<"*["<<s[i].name<<"] ";
			cout<<s[i].score1<<" ";
			cout<<s[i].score2<<" ";
			cout<<s[i].score3<<endl;
		}
	}
	cout<<endl;
}
void printByAverage(Student s[],int n){
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>i;j--)
			if(s[j-1].total>s[j].total)
				swap(s,j-1,j);
	for(int k=n-1;k>=0;k--){
		cout<<s[k].name<<" ";
		cout<<s[k].score1<<" ";
		cout<<s[k].score2<<" ";
		cout<<s[k].score3<<endl;
	}
}
int main(){
	cout<<"please input student number"<<endl;
	int n=0;
	cin>>n;
	Student s[100];
	cout<<"please input student's name,score1,score2,score3"<<endl;
	for(int i=0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].score1;
		cin>>s[i].score2;
		cin>>s[i].score3;
		cin>>s[i].total;
	}
	find_fail(s,n);
	printByAverage(s,n);
	return 0;	
}
