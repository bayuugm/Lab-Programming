recurrence: recurrence.o
	g++ recurrence.o -o recurrence.exe

recurrence.o: recurrence.cpp
	g++ -c recurrence.cpp -o recurrence.o

run: recurrence
	./recurrence.exe

recurrenceTest: recurrenceTest.o
	g++ recurrenceTest.o -o recurrenceTest.exe

recurrenceTest.o: recurrenceTest.cpp
	g++ -c recurrenceTest.cpp -o recurrenceTest.o

test: recurrenceTest
	./recurrenceTest.exe

clean:
	rm -f recurrence.o recurrenceTest.o recurrence.exe recurrenceTest.exe
