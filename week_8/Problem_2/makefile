sortbinary: sortbinary.o
	g++ sortbinary.o -o sortbinary.exe

sortbinary.o: sortbinary.cpp
	g++ -c sortbinary.cpp -o sortbinary.o

run: sortbinary
	./sortbinary.exe

sortbinaryTest: sortbinaryTest.o
	g++ sortbinaryTest.o -o sortbinaryTest.exe

sortbinaryTest.o: sortbinaryTest.cpp
	g++ -c sortbinaryTest.cpp -o sortbinaryTest.o

test: sortbinaryTest
	./sortbinaryTest.exe

clean:
	rm -f sortbinary.o sortbinaryTest.o sortbinary.exe sortbinaryTest.exe
