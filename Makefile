all: build/matrix

build/matrix: build/main.o build/matrix.o
	g++ build/main.o build/matrix.o -o build/matrix

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o
	
build/matrix.o: src/matrix.cpp | build
	g++ -c src/matrix.cpp -o build/matrix.o

build:
	mkdir -p build

clean:
	rm -r build
