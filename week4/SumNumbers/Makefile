CXX = g++
CXXFLAGS = -Wall
TARGET = sum
SRC = sum.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) test

clean: 
	rm -f $(TARGET)
	
run: $(TARGET)
	./$(TARGET) 
