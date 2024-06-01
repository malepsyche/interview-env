# chmod +x run.sh
# ./run.sh

#!/bin/bash

# Set the Python script name
SCRIPT="test.py"

# Check if input file exists
if [ ! -f input.txt ]; then
    echo "input.txt not found!"
    exit 1
fi

# Run the Python script
python3 $SCRIPT

# Check if the execution was successful
if [ $? -eq 0 ]; then
    echo "Execution successful."
else
    echo "Execution failed."
fi