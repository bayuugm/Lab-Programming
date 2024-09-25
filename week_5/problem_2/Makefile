ReverseArray: ReverseArray.o
	g++ ReverseArray.o -o ReverseArray.exe

ReverseArray.o: ReverseArray.cpp
	g++ -c ReverseArray.cpp -o ReverseArray.o

run: ReverseArray
	./ReverseArray.exe

ReverseArrayTest: ReverseArrayTest.o
	g++ ReverseArrayTest.o -o ReverseArrayTest.exe

ReverseArrayTest.o: ReverseArrayTest.cpp
	g++ -c ReverseArrayTest.cpp -o ReverseArrayTest.o

test: ReverseArrayTest
	./ReverseArrayTest.exe

clean:
	rm -f ReverseArray.o ReverseArrayTest.o ReverseArray.exe ReverseArrayTest.exe
