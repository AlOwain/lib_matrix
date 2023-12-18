all: build/matrix

build/matrix: build/matrix.o
	g++ build/matrix.o -o build/matrix

build/matrix.o: src/matrix.cpp | build
	g++ -c src/matrix.cpp -o build/matrix.o
	
build:
	mkdir -p build

clean:
	rm -r build
