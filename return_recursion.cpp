#include <bits/stdc++.h>
using namespace std;
int cnt=0;
int n;
void print(){
	if(cnt==n)
		return;
	cout<<"I love Recursion"<<endl;
	cnt++;
	print();
}
int main(){
	cin>>n;
print();
return 0;
}