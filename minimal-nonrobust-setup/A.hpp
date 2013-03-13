 
#include <iostream>


template <typename T>
class A  
{

public:
  void foo() 
  {
     static_assert( not std::is_same<int, T>::value, " int specialization for foo() is not instantiated !");
     std::cerr << "error: called generic foo() " << std::endl ;
  }
  void bar() 
  {
     static_assert( std::is_same<int, T>::value, " bar instantiated !");
     std::cerr << "called generic bar() " << std::endl ;
  }

};


// forgetting this declaration leads to an unintended program behaviour
template <> void A< int >::foo();

 template class  A< int >;
