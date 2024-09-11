# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = password_manager

# List of source files
SRC = main.cpp PasswordManager.cpp

# List of object files (automatically generated from source files)
OBJ = $(SRC:.cpp=.o)

# Default rule: compile and link the program
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile each .cpp file into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Phony target to avoid confusion with files
.PHONY: all clean
