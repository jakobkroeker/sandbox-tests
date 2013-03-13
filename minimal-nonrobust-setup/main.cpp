#include "A.hpp"
 
void bar();

int main(int argc , char** argv)
{

 std::cerr << "std::is_same<int, long>::value " << std::is_same<int, long>::value << std::endl;


  A<int>* a = new A<int>();

 
   //std::cerr << " a->DisallowInt;" <<  a->DisallowInt << std::endl;

  a->foo();
  a->bar();
  //bar();
  return 0;
}

