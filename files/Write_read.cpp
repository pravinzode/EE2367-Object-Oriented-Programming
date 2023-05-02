#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("items.txt");
	cout<<"Enter item Name";
	char name[30];
	cin>>name;
	
	outf<<name<<endl;
	
	cout <<"Enter item Cost";
	float cost;
	cin >>cost;
	
	outf <<cost <<endl;
	
	outf.close();
//----------------------------------

ifstream inf("items.txt");

inf>>name;
inf>>cost;
cout<<endl;
cout<<"Item name :"<<name<<endl;
cout<<"Item Cost :"<<cost<<endl;

inf.close();
return 0;
}	
	


