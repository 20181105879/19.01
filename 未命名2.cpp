#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
struct node{
	string id;
	long socre;
};
bool cmp(struct node p1,struct node p2)
{
	return p1.socre<p2.socre;
}
int main()
{
	vector<struct node> v;
	long long n,m;
	string id;
	cin>>n;
	struct node t;
	for(long long i=0;i<n;i++)
	{
		cin>>id>>m;
		t.id=id;
		t.socre=m;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),cmp);
	vector<struct node>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<it->id<<" "<<it->socre<<endl;
	}

	return 0;
}


