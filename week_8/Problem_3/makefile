calculatefunction: calculatefunction.o
	g++ calculatefunction.o -o calculatefunction.exe

calculatefunction.o: calculatefunction.cpp
	g++ -c calculatefunction.cpp -o calculatefunction.o

run: calculatefunction
	./calculatefunction.exe

calculatefunctionTest: calculatefunctionTest.o
	g++ calculatefunctionTest.o -o calculatefunctionTest.exe

calculatefunctionTest.o: calculatefunctionTest.cpp
	g++ -c calculatefunctionTest.cpp -o calculatefunctionTest.o

test: calculatefunctionTest
	./calculatefunctionTest.exe

clean:
	rm -f calculatefunction.o calculatefunctionTest.o calculatefunction.exe calculatefunctionTest.exe
