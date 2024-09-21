CXX = g++
CXXFLAGS = -Wall
TARGET = multiplication
SRC = multiplication.cpp
TEST = test.txt

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) $(TEST)

clean: 
	rm -f $(TARGET)
	
run: $(TARGET)
	./$(TARGET) 

