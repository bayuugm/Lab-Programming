fizzbuzz: fizzbuzz.o
	g++ fizzbuzz.o -o fizzbuzz.exe

fizzbuzz.o: fizzbuzz.cpp
	g++ -c fizzbuzz.cpp -o fizzbuzz.o

run: fizzbuzz
	./fizzbuzz.exe

fizzbuzzTest: fizzbuzzTest.o
	g++ fizzbuzzTest.o -o fizzbuzzTest.exe

fizzbuzzTest.o: fizzbuzzTest.cpp
	g++ -c fizzbuzzTest.cpp -o fizzbuzzTest.o

test: fizzbuzzTest
	./fizzbuzzTest.exe

clean:
	rm -f fizzbuzz.o fizzbuzzTest.o fizzbuzz.exe fizzbuzzTest.exe

