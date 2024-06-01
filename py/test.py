import sys
import heapq
from collections import defaultdict, deque

def fast_io():
    input = sys.stdin.read
    data = input().split()
    index = 0
    def read():
        nonlocal index
        value = data[index]
        index += 1
        return value
    return read

def print_vector(v):
    print(" ".join(map(str, v)))

#_____________________________________________________________________________________________________
def solve():
    pass

if __name__ == "__main__":
    sys.stdin = open('input.txt', 'r')
    # sys.stdout = open('output.txt', 'w')  # Uncomment for file output

    read = fast_io()
    
    t = int(read())  # Read number of test cases
    for _ in range(t):
        solve()