CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

project(Chess_project)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(chess
	../src/main.cpp

)

#ADD_EXECUTABLE(test
# unit_test.cpp
#)
#TARGET_LINK_LIBRARIES(test gtest)
#TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
