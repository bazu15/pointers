#include <iostream>

using namespace std;

void myswap(int * ptr1, int* ptr2)
{
  auto temp = ptr1;// must point to variables here
  *ptr1 = *ptr2;
  *ptr2 = temp;
}


int main()
{
  int a = 25, b = 11;    

  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(a, b); // but mine doesn't ?!?!?!?!!!???
// we have to use reference to vars in the callign func

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
