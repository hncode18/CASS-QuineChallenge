all: main

main: main.cpp
	g++ -std=c++11 -O3 main.cpp -o quine -fopenmp