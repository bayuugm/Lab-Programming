sequentialsearch: sequentialsearch.o
	g++ sequentialsearch.o -o sequentialsearch.exe

sequentialsearch.o: sequentialsearch.cpp
	g++ -c sequentialsearch.cpp -o sequentialsearch.o

run: sequentialsearch
	./sequentialsearch.exe

sequentialsearchTest: sequentialsearchTest.o
	g++ sequentialsearchTest.o -o sequentialsearchTest.exe

sequentialsearchTest.o: sequentialsearchTest.cpp
	g++ -c sequentialsearchTest.cpp -o sequentialsearchTest.o

test: sequentialsearchTest
	./sequentialsearchTest.exe

clean:
	rm -f sequentialsearch.o sequentialsearchTest.o sequentialsearch.exe sequentialsearchTest.exe
