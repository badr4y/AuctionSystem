all: Item.o Buyer.o main.o
	g++ -o main Item.o Buyer.o main.o

main.o: main.cpp Item.h Buyer.h
	g++ -c -Wall --std=c++17 main.cpp

Item.o: Item.cpp Item.h
	g++ -c -Wall --std=c++17 Item.cpp

Buyer.o: Buyer.cpp Buyer.h
	g++ -c -Wall --std=c++17 Buyer.cpp

clean:
	rm -rf *.o main

