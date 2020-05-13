
# Set up the project.
cmake_minimum_required( VERSION 3.0 )
project( BaseInfoSYCLCrash VERSION 1.0 LANGUAGES CXX )

# Build the test executable.
add_executable( baseInfoBug test.cxx BaseInfo.h BaseInfo.icc BaseInfo.cxx
                            TestBaseType.h TestDerivedType.h )
