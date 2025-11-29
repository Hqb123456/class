#include <bits/stdc++.h>
using namespace std;
using long long  = ll;
const int MAX = 10000 +5;
long long a[MAX],b,c[MAX];
string sa;
void str_to_arr(const string &s,long long d[]){
	d[0]=s.size();
	for(int i = d[0];i>=1;i--){
		d[i]=s[d[0]-i]-'0';
	}
}
void print_arr(long long d[]){
	for(int i =d[0];i>=1;i--){
		cout<<d[i];
	}
	cout<<endl;
}
void mul(){
	int i;
	long long x = 0;
	for(i=1;i<=a[0];i++){
		x=c[i]=a[i]*b+x;
		x=c[i]/10;
		c[i]=x%10;
	}	
	while(x){
		c[i]=x%10;
		x/=10;
		i++;
	}
}
int main(){
	cin>>sa>>b;
	str_to_arr(sa,a);
	return 0;
}

