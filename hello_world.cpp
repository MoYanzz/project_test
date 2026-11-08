#include <bits/stdc++.h>
#define ll long long
#define gc getchar
#define il inline
using namespace std;
il ll rd(){
	ll p=0, f=1; char c=gc();
	while(c < '0' || c > '9'){
		if(c == '-') f = -1;
		c=gc();
	}
	while(c >= '0' && c <= '9'){
		p = (p << 3) + (p << 1) + (c ^ 48);
		c=gc();
	}
	return p * f;
}
ll n, m, cnt, T, ans;
int main(){
	cout << "Hello world" << endl; 
	cout << "2" << endl;
	cout << 1 << endl;
	return 0;
}

