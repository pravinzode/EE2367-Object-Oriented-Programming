#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
char name[20];
int price,qty;
ifstream inf("grocery.txt");
cout<<setw(20)<<"Item name :"<<setw(10)<<"Price"<<setw(5)<<"Qty"<<setw(10)<<"Total"<<endl;
inf>>name;
inf>>price;
inf>>qty;
cout<<endl;
cout<<"Item name :"<<name<<endl;
cout<<"Item Cost :"<<price<<endl;
cout<<"Quantity= "<<qty<<endl;
cout<<"Total Price ="<<price*qty<<endl;

inf.close();
return 0;
}	
	


