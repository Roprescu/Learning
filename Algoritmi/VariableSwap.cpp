#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;
   int z;
   cout<<"Introduce X \n";
   cin>>x;
   cout<<"Introduce y \n";
   cin>>y;
   
   z=x;
   x=y;
   y=z;
   cout<<x<<" SI "<<y;
 
}
