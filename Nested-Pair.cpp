#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int, pair<int, string>> p;
	//p= make_pair(2,"anshu");
	//p={2,"anshu"};
	p={2,{4,"abhishek"}};
	cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
}