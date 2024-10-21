gcdfunction: gcdfunction.o
	g++ gcdfunction.o -o gcdfunction.exe

gcdfunction.o: gcdfunction.cpp
	g++ -c gcdfunction.cpp -o gcdfunction.o

run: gcdfunction
	./gcdfunction.exe

gcdfunctionTest: gcdfunctionTest.o
	g++ gcdfunctionTest.o -o gcdfunctionTest.exe

gcdfunctionTest.o: gcdfunctionTest.cpp
	g++ -c gcdfunctionTest.cpp -o gcdfunctionTest.o

test: gcdfunctionTest
	./gcdfunctionTest.exe

clean:
	rm -f gcdfunction.o gcdfunctionTest.o gcdfunction.exe gcdfunctionTest.exe
