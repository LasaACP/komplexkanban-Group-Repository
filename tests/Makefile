SHELL = /bin/sh

all: clean main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := ../lib
TESTS := main.cpp

main: $(TESTS) $(HEADERS) catch_amalgamated
	$(CXX) $(CXXFLAGS) $(TESTS) catch_amalgamated -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

catch_amalgamated: catch_amalgamated.cpp catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamated.cpp -o "$@"

clean:
	rm -f main main-debug