areacircle: areacircle.o
      g++ areacircle.o -o areacircle.exe

areacircle.o: areacircle.cpp
      g++ -c areacircle.cpp -o areacircle.o

run: areacircle
      ./areacircle.exe

areacircleTest: areacircleTest.o
      g++ areacircleTest.o -o areacircleTest.exe

areacircleTest.o: areacircleTest.cpp
      g++ -c areacircleTest.cpp -o areacircleTest.o

test: areacircleTest
      ./areacircleTest

clean: 
      rm -f 


