#include <iostream>
using namespace std;
long long trans(int x){
	long long int y=0;int a[100];int i=0;
	for( i=0;x!=0;i++){
		int k=x%2;
		a[i]=k;
		x=x/2;
	}
	for(int j=i;j>=0;j--){
		y=a[j]+y*10;
	}
	return y;
}
int main(){
	int x=0;
	cin>>x;
	printf("%lld",trans(x));
	return 0;
} 
