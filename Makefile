# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Target executable
TARGET = calculator

# Source files
SRCS = calculator.cpp

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean up generated files
clean:
	rm -f $(TARGET)
