#include <iostream>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<float> num; 
   int i;
   float x;

   // display the original size of vec
   cout << "vector size = " << num.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 5; i++) {
      cout << "\n Enter values of element \t";
      cin >> x; 
	  num.push_back(x);
   }

   // display extended size of vec
   cout << "extended vector size = " << num.size() << endl;

   // access 5 values from the vector
   for(i = 0; i < 5; i++) {
      cout << "value of num [" << i << "] = " << num[i] << endl;
   }

   // use iterator to access the values
   vector<float>::iterator v = num.begin();
   while( v != num.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }

   return 0;
}
