all: build/matrix

build/matrix: build/main.o
	g++ build/main.o -o build/matrix

build/main.o: src/main.cpp | build
	g++ -c src/main.cpp -o build/main.o
	
build:
	mkdir -p build

clean:
	rm -r build
