#include <iostream>
using namespace std;
float calculate(char a[]){
	char n1=a[0];
	char op=a[1];
	char n2=a[2];
	if(op=='+')
		return n1+n2-'0'-'0';
	else if(op=='-')
		return n1-n2;
	else if(op=='*')
		return (n1-'0')*(n2-'0');
	else 
		return(n1-'0'-0.0)/(n2-'0');
}
int main(){
	cout<<"input the calculation"<<endl;
	char str[3];
	cin>>str;
	float result=calculate(str);
	cout<<result<<endl;
	return 0;
} 
