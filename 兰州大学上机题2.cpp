#include <iostream>
#include <string> 
using namespace std;
#define MAXSIZE 100
/*string to_string(int n)
{
    int m=n;
	int i=0,j=0;
	char s[MAXSIZE];
	char ss[MAXSIZE];
	while(m>0)
	{
		s[i++]= m%10 + '0';
		m/=10;
	}
	s[i]='\0';
 
	i=i-1;
	while(i>=0)
	{
		ss[j++]=s[i--];
	}
	ss[j]='\0';
 
	return ss;
}
*/ 
string compress(string iniString){
	string str;
	int count=1;
	for(int i=0;i<iniString.length();i++){
		if(iniString[i]==iniString[i+1]){
			count++;
			continue;
		}
		str+=iniString[i];
		str+=to_string(count);
		count=1;
	}
	if(str.length()>iniString.length())
		return iniString;
	return str;
}
int main(){
	char str[MAXSIZE];
	cin>>str;
	string s=compress(str);
	cout<<s<<endl;
	
	return 0;
} 
