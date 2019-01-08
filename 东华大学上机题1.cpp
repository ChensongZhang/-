#include <iostream>
using namespace std;
void findWaterFlowerNum(){
	int ge=0,shi=0,bai=0;
	for(int i=100;i<999;i++){
		int n=i/10;
		ge=i%10;
		shi=n%10;
		bai=n/10;
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i)	
			cout<<i<<" ";	
	}
	cout<<endl;
}
int main(){
	findWaterFlowerNum();
	return 0;
}
