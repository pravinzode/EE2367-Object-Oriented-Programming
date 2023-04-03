#include<iostream>
#include<list>
 
using namespace std;
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 	list1.push_front(2);
 	list1.push_front(1);
 	list1.pop_back();
 	list1.pop_back();
 	list1.pop_front();
    list<int> :: iterator it;
    
    for (it = list1.begin(); it != list1.end(); it++)
    {
        cout<<*it<<" ";
    }
 
    return 0;
}
