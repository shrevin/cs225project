CXX=clang++
CXX_FLAGS=-std=c++20 -g -O0 -Wall -Wextra -Werror -Iincludes/

exec: bin/exec
tests: bin/tests

bin/exec: src/main.cpp 
	${CXX} ${CXX_FLAGS} src/node.cpp src/main.cpp -o bin/exec

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf bin/*

	