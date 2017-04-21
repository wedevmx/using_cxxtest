CXXFLAGS=-Wall

run_tests: runner
	./runner

runner: runner.cpp
	g++ -o runner runner.cpp $(CXXFLAGS)

runner.cpp: test_string.h
	cxxtestgen --error-printer -o runner.cpp test_string.h

