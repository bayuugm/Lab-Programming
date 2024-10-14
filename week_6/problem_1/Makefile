student_data: student_data.o
	g++ student_data.o -o student_data.exe

student_data.o: student_data.cpp
	g++ -c student_data.cpp -o student_data.o

run: student_data
	./student_data.exe

student_dataTest: student_dataTest.o
	g++ student_dataTest.o -o student_dataTest.exe

student_dataTest.o: student_dataTest.cpp
	g++ -c student_dataTest.cpp -o student_dataTest.o

test: student_dataTest
	./student_dataTest.exe

clean:
	rm -f student_data.o student_dataTest.o student_data.exe student_dataTest.exe
