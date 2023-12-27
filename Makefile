all: build/lib_matrix.a

build/lib_matrix.a: build/matrix.o
	ar rcs build/matrix.a build/matrix.o
	
build/matrix.o: src/matrix.cpp | build
	g++ -c src/matrix.cpp -o build/matrix.o

build:
	mkdir -p build

clean:
	rm -r build
