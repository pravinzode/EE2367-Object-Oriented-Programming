//Reading the file, captial and distance is saved in captial.txt file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//-------------------------------------
	char name[30];
	float cost;
//----------------------------------
ifstream inf("capital.txt");
inf>>name;
inf>>cost;
cout<<"Capital name :"<<name<<endl;
cout<<"Distance:"<<cost<<endl;
inf.close();
return 0;
}	
	


