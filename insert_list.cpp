//program for insertion at end of list 
// l1.end() replace by l1.begin() for adding element at beginning of list 
#include<iostream>
#include<list>
using namespace std;

int main ( )
{
   list<int> l1;
   l1.push_back(10);
   l1.push_back(200);
   l1.push_back(300);
   l1.push_back(400);
   l1.push_back(500);
   l1.push_back(600);
   l1.push_back(600);
   l1.insert( l1.end(), 6);
   cout<< "\nNew list";
   list<int> ::iterator t;
   for( t=l1.begin( ); t != l1.end( ); ++t)
      cout<< " "<<*t;
   return 0;
}
