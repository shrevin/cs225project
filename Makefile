CXX=clang++
CXX_FLAGS=-std=c++20 -g -O0 -Wall -Wextra -Werror -Iincludes/

exec: bin/exec
tests: bin/tests

bin/exec: src/main.cpp 
	${CXX} ${CXX_FLAGS} src/edge.cpp src/graph.cpp src/main.cpp -o bin/exec

bin/tests: tests/tests.cpp
	${CXX} ${CXX_FLAGS} src/edge.cpp src/graph.cpp tests/tests.cpp -o bin/tests

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf bin/*

	