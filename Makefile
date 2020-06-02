#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

HEADERS := $(wildcard *.h*)
TEACHER_SOURCES := Demo.cpp DemoGame.cpp TestCounter.cpp Test.cpp
STUDENT_SOURCES := $(filter-out $(TEACHER_SOURCES), $(wildcard *.cpp))
STUDENT_OBJECTS := $(subst .cpp,.o,$(STUDENT_SOURCES))

run: demo
	./$^

demo: Demo.o DemoGame.o $(STUDENT_OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

test: TestCounter.o Test.o $(STUDENT_OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test
	
main1: main.o FootSoldier.o FootCommander.o
	$(CXX) $(CXXFLAGS) main.o FootSoldier.o FootCommander.o -o main1

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o demo test