stringreverse: stringreverse.o
      g++ stringreverse.o -o stringreverse.exe

stringreverse.o: stringreverse.cpp
      g++ -c stringreverse.cpp -o stringreverse.o

run: stringreverse
      ./stringreverse.exe

stringreverseTest: stringreverseTest.o
      g++ stringreverseTest.o -o stringreverseTest.exe

stringreverse.o: stringreverse.cpp
      g++ -c stringreverseTest.cpp -o stringreverseTest.o

run: stringreverseTest
      ./stringreverseTest.exe

clean:
      rm -f stringreverse.o stringreverseTest.o stringreverse.exe stringreverseTest.exe



