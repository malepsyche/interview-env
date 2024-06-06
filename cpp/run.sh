# chmod +x run.sh
# ./run.sh

#!/bin/bash

# Set the source file and executable names
SOURCE="test.cpp"
EXECUTABLE="test"

# Compile the C++ source file
g++ -std=c++17 -O2 -o $EXECUTABLE $SOURCE

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."
    # Run the executable
    ./$EXECUTABLE
else
    echo "Compilation failed."
fi


