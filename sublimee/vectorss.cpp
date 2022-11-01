#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
	cout<<"size:"<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

}
int main()
{
	pair <int,int> p;
	p.first=3;
	p.second=6;
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		printvec(v);
		v.push_back(x);
	}
	printvec(v);
	cout<<p.first<<"\n"<<p.second;
}