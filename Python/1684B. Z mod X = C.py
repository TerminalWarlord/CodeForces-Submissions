# Author : TerminalWarlord - Joy Biswas
# Date   : 19.05.2022

from __future__ import division, print_function

import os,sys
from io import BytesIO, IOBase

if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip


def ii():  return int(input())
def si():  return input()
def mi():  return map(int,input().strip().split(" "))
def msi(): return map(str,input().strip().split(" "))
def li():  return list(mi())

def dmain():
    sys.setrecursionlimit(1000000)
    threading.stack_size(1024000)
    thread = threading.Thread(target=main)
    thread.start()
import math
#from collections import deque, Counter, OrderedDict,defaultdict
#from heapq import nsmallest, nlargest, heapify,heappop ,heappush, heapreplace
#from math import log,sqrt,factorial,cos,tan,sin,radians
#from bisect import bisect,bisect_left,bisect_right,insort,insort_left,insort_right
#from decimal import *
#import threading
#from itertools import permutations
#Copy 2D list  m = [x[:] for x in mark] .. Avoid Using Deepcopy

abc='abcdefghijklmnopqrstuvwxyz'
abd={'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7, 'i': 8, 'j': 9, 'k': 10, 'l': 11, 'm': 12, 'n': 13, 'o': 14, 'p': 15, 'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21, 'w': 22, 'x': 23, 'y': 24, 'z': 25}
mod=1000000007
#mod=998244353
inf = float("inf")
vow=['a','e','i','o','u']
dx,dy=[-1,1,0,0,1,-1,1,-1],[0,0,1,-1,1,-1,-1,1]
def getKey(item): return item[1] 
def sort2(l):return sorted(l, key=getKey,reverse=True)
def d2(n,m,num):return [[num for x in range(m)] for y in range(n)]
def isPowerOfTwo (x): return (x and (not(x & (x - 1))) )
def decimalToBinary(n): return bin(n).replace("0b","")
def ntl(n):return [int(i) for i in str(n)]
def ncr(n,r): return factorial(n)//(factorial(r)*factorial(max(n-r,1)))

def ceil(x,y):
    if x%y==0:
        return x//y
    else:
        return x//y+1

def powerMod(x,y,p):
    res = 1
    x %= p
    while y > 0:
        if y&1:
            res = (res*x)%p
        y = y>>1
        x = (x*x)%p
    return res

def gcd(x, y):
    while y:
        x, y = y, x % y
    return x
    
def isPrime(n) : # Check Prime Number or not 
    if (n <= 1) : return False
    if (n <= 3) : return True
    if (n % 2 == 0 or n % 3 == 0) : return False
    i = 5
    while(i * i <= n) : 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i = i + 6
    return True



def read():
    sys.stdin  = open('inputf.in', 'r')  
    sys.stdout = open('outputf.out', 'w') 

def main():
    tc = 1;
    tc = ii();
    for _ in range(tc):
        a,b,c = mi()
        x = (b*c)//gcd(c, b) + a; 
        print(x, b, c)
            
# region fastio
# template taken from https://github.com/cheran-senthil/PyRival/blob/master/templates/template.py

BUFSIZE = 8192


class FastIO(IOBase):
    newlines = 0
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None

    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()

    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()

    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)


class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")


def print(*args, **kwargs):
    """Prints the values to a stream, or to sys.stdout by default."""
    sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
    at_start = True
    for x in args:
        if not at_start:
            file.write(sep)
        file.write(str(x))
        at_start = False
    file.write(kwargs.pop("end", "\n"))
    if kwargs.pop("flush", False):
        file.flush()


if sys.version_info[0] < 3:
    sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
    sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)

input = lambda: sys.stdin.readline().rstrip("\r\n")

# endregion


if __name__ == "__main__":
    # read()
    main()
    #dmain()

# Comment Read()