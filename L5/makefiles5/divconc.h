#include<iostream>
#include<vector>

using namespace std;

/*
Logic:
Use Divide and Conquer strategy and Merge Sort to sort the union of arrays
*/
void merge(int b1,int b2,vector <int> v[])
{
	auto it1=v[b1].begin();
	auto it2=v[b2].begin();
	vector <int> vtmp;
	while(it1!=v[b1].end()&&it2!=v[b2].end())
	{
		if(*it1<*it2)
		{
			vtmp.push_back(*it1);
			it1++;
		}
		else
		{
			vtmp.push_back(*it2);
			it2++;
		}
	}
	while(it1!=v[b1].end())
	{
		vtmp.push_back(*it1);
		it1++;
	}
	while(it2!=v[b2].end())
	{
		vtmp.push_back(*it2);
		it2++;
	}
	
	v[b1].clear();
	auto it=vtmp.begin();
	while(it!=vtmp.end())
	{
		//cout<<*it<<' ';
		v[b1].push_back(*it);
		it++;
	}
	//cout<<'\n';
    
}

void divconc(int b,int h,vector <int> v[]) 
{
	if(h==1)
		return;
	else if(h==2)
		merge(b,b+1,v);
	else 
	{
		divconc(b,h/2,v);
		divconc(b+h/2,h-h/2,v);
		merge(b,b+h/2,v);
	}
}
/*
int main()
{
	
	int h,k,in;
	vector <int> v[h];
	cout<<"ENTER THE NUMBER OF ARRAYS,NUMBER OF ELEMENTS PER ARRAY";
	cin>>h>>k;
	for(int i=0;i<h;i++)
	{	
		for(int j=0;j<k;j++)
		{
			cin>>in;
			v[i].push_back(in);
		}
	}
	
}
*/