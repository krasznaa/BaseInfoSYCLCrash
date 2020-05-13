// Dear emacs, this is -*- c++ -*-
//
// Copyright (C) 2002-2020 CERN for the benefit of the ATLAS collaboration
//
#ifndef BASEINFOBUG_TESTDERIVEDTYPE_H
#define BASEINFOBUG_TESTDERIVEDTYPE_H

// Local include(s).
#include "TestBaseType.h"

/// Type deriving from BaseType, for the test
struct TestDerivedType : public TestBaseType {};

// Declare the type's base info.
#include "BaseInfo.h"
SG_BASE( TestDerivedType, TestBaseType );

#endif // BASEINFOBUG_TESTDERIVEDTYPE_H
