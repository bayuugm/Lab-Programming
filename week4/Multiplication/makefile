CXX = g++
CXXFLAGS = -Wall
TARGET = multiplication
SRC = multiplication.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) test

clean: 
	rm -f $(TARGET)
	
run: $(TARGET)
	./$(TARGET) 

