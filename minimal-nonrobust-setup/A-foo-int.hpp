#include "A.hpp"

// forgetting this declaration leads to an unintended program behaviour
template <> void A< int >::foo();

