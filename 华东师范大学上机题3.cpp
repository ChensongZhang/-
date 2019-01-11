#include <iostream>
using namespace std;

int main(){
	cout<<"input number of male,female,dance"<<endl;
	int m=0,n=0,k=0;
	cin>>m>>n>>k;
	int m_temp=1,n_temp=1;
	int cycle=1;
	while(cycle<=k){
		if(m_temp>m)
			m_temp=1;
		if(n_temp>n)
			n_temp=1;
		cout<<m_temp<<" "<<n_temp<<endl;
		m_temp++;
		n_temp++;
		cycle++;	 
	}
	return 0;
} 
