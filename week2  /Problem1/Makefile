CXX = g++
CXXFLAGS = -Wall
TARGET = Payslip_Employee
SRC = Payslip_Employee.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	./$(TARGET) test

clean: 
	rm -f $(TARGET)
	
run: $(TARGET)
	./$(TARGET) 
