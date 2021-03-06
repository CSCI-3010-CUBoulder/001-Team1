CXX = g++
CXXFLAGS        = -std=c++17 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test # Rectangle.o (because you can't recompile this one!)
	rm functions_to_implement.o

test: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

cov: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
