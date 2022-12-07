SHELL = /bin/sh

all: main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := $(wildcard *.cpp)
SRCS := $(wildcard "../lib/*.cpp", $(SRCS))
HEADERS := $(wildcard *.h*)
HEADERS := $(wildcard '../lib/*.h*', $(HEADERS))
HEADERS := $(wildcard '../include/*.h*', $(HEADERS))

$(info HEADERS is $(HEADERS))

# main: $(TESTS) ../src/fac.cpp ../src/fac.h $(HEADERS)
# 	$(CXX) $(CXXFLAGS) $(TESTS) ../src/fac.cpp catch_amalgamated -o "$@"

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -I../include $(SRCS) ../lib/*.cpp -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -O0 $(SRCS) -o "$@"

clean:
	rm -f main main-debug