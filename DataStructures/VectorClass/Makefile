.PHONY: v.out

main.o: main.cpp
	g++ main.cpp -c -o main.o

Vector.o: Vector.cpp
	g++ Vector.cpp -c -o Vector.o

v.out: main.o Vector.o
	g++ main.o Vector.o -g -o v.out

clean: 
	rm *.cpp *.o *.out
