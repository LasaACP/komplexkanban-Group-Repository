SHELL = /bin/sh

all: main

CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS := $(wildcard *.cpp)
SRCS := $(wildcard "../lib/*.cpp", $(SRCS))
HEADERS := $(wildcard *.h*)
HEADERS := $(wildcard '../include/*.h*', $(HEADERS))

$(info HEADERS is $(HEADERS))

main: $(TESTS) complasa_runner.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $(TESTS) complasa_runner.cpp catch_amalgamated -o "$@"

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -I../include $(SRCS) ../lib/*.cpp -o "$@"

main-debug: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -O0 $(SRCS) -o "$@"

clean:
	rm -f main main-debug