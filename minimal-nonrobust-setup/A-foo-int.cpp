#include "A.hpp"


template <> 
void A< int >::foo()
{
#warning using A< int >::foo()
 //static_assert( false, " specialization for int is  instantiated !");

  std::cout << "calling  <int> version of foo" << std::endl;
}

