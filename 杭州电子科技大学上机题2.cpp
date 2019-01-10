#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	int hour;int min;int sec;
}time;
typedef  struct{
	char id[100];
	time t1,t2;
	int workTime;
}employee;
bool cmp1(employee a,employee b){
	if(a.t1.hour!=b.t1.hour)
		return a.t1.hour<b.t1.hour;
	else if(a.t1.min!=b.t1.min)
		return a.t1.min<b.t1.min;
	else
		return a.t1.sec<b.t1.sec;
}
bool cmp2(employee a,employee b){
	if(a.t2.hour!=b.t2.hour)
		return a.t2.hour<b.t2.hour;
	else if(a.t2.min!=b.t2.min)
		return a.t2.min<b.t2.min;
	else
		return a.t2.sec<b.t2.sec;
}
bool cmp3(employee a,employee b){
	return a.workTime>b.workTime;
}
int main(){
	cout<<"input number of employees"<<endl;
	int n=0;
	cin>>n;
	employee em[100];
	cout<<"input id,begin work time,quit work time of everyone"<<endl;
	for(int i=0;i<n;i++){
		cin>>em[i].id;
		scanf("%2d:%2d:%2d",&em[i].t1.hour,&em[i].t1.min,&em[i].t1.sec);
		scanf("%2d:%2d:%2d",&em[i].t2.hour,&em[i].t2.min,&em[i].t2.sec);
		em[i].workTime=(em[i].t2.hour*3600+em[i].t2.min*60+em[i].t2.sec
		-em[i].t1.hour*3600-em[i].t1.min*60-em[i].t1.sec);  
	}
	sort(em,em+n,cmp1);
	cout<<"open:"<<em[0].id<<" ";
	printf("%2d:%2d:%2d\n",em[0].t1.hour,em[0].t1.min,em[0].t1.sec);
	sort(em,em+n,cmp2);
	cout<<"quit:"<<em[0].id<<" ";
	printf("%2d:%2d:%2d\n",em[0].t2.hour,em[0].t2.min,em[0].t2.sec);
	sort(em,em+n,cmp3);
	cout<<"worktime:"<<em[0].id<<" ";
	printf("%2d:%2d:%2d\n",em[0].t1.hour,em[0].t1.min,em[0].t1.sec); 
	return 0;
} 
