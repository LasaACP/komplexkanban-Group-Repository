all: main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := ./lib/abs.cpp ./lib/arg.cpp ./lib/complex.cpp ./lib/compoundAssignment.cpp ./lib/cos.cpp ./lib/cosh.cpp ./lib/exp.cpp ./lib/log.cpp ./lib/log10.cpp ./lib/norm.cpp ./lib/polar.cpp ./lib/pow.cpp ./lib/sin.cpp ./lib/sinh.cpp ./lib/sqrt.cpp ./lib/tan.cpp ./lib/tanh.cpp ./lib/acos.cpp ./lib/asin.cpp ./lib/atan.cpp

#SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')
HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

clean:
	rm -f main main-debug