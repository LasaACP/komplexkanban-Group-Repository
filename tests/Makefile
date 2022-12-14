SHELL = /bin/sh

all: clean main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := ../lib/abs.cpp ../lib/asin.cpp ../lib/acos.cpp ../lib/atan.cpp ../lib/arg.cpp ../lib/complex.cpp ../lib/compoundAssignment.cpp ../lib/cos.cpp ../lib/cosh.cpp ../lib/exp.cpp ../lib/log.cpp ../lib/log10.cpp ../lib/norm.cpp ../lib/polar.cpp ../lib/pow.cpp ../lib/sin.cpp ../lib/sinh.cpp ../lib/sqrt.cpp ../lib/tan.cpp ../lib/tanh.cpp
TESTS := main.cpp

main: $(TESTS) $(HEADERS) catch_amalgamated
	$(CXX) $(CXXFLAGS) $(TESTS) catch_amalgamated -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

catch_amalgamated: catch_amalgamated.cpp catch_amalgamated.hpp
	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamated.cpp -o "$@"

clean:
	rm -f main main-debug
