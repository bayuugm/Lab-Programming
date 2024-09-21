CXX = g++
CXXFLAGS = -Wall
TARGET = multiplication
SRC = multiplication.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) 

clean: 
	rm -f $(TARGET)
	

