sortingmethod: sortingmethod.o
	g++ sortingmethod.o -o sortingmethod.exe

sortingmethod.o: sortingmethod.cpp
	g++ -c sortingmethod.cpp -o sortingmethod.o

run: sortingmethod
	./sortingmethod.exe

sortingmethodTest: sortingmethodTest.o
	g++ sortingmethodTest.o -o sortingmethodTest.exe

sortingmethodTest.o: sortingmethodTest.cpp
	g++ -c sortingmethodTest.cpp -o sortingmethodTest.o

test: sortingmethodTest
	./sortingmethodTest.exe

clean:
	rm -f sortingmethod.o sortingmethodTest.o sortingmethod.exe sortingmethodTest.exe
