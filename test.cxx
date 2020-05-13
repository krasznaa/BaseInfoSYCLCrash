//
// Copyright (C) 2002-2020 CERN for the benefit of the ATLAS collaboration
//

// Local include(s).
#include "TestDerivedType.h"
#include "BaseInfo.h"

// System include(s).
#include <cassert>

int main() {

   // Test the behaviour of SG::BaseInfo.
   assert( SG::BaseInfo< TestDerivedType >::is_base( typeid( TestBaseType ) ) ==
           true );
   return 0;
}
