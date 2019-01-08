//中南大学上机2
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h> 
using namespace std;
int main(){
	int k,x,y;
	double s=0;
	while(scanf("%1ld",&k)!=EOF){
		if(k<3){
			cout<<"边数输入错误"<<endl;
			break; 
		}
		x=(k-3)/2;
		y=(k-3)%2;
		if(y==0){
			s=(1+4*x)*0.5;
			cout<<"面积最大值为";
			printf("%.1lf\n",s);
		} 
		else{
			s=(1+4*x+3)*0.5;
			cout<<"面积最大值为";
			printf("%.1lf\n",s);
		}
	}
	return 0;
}
