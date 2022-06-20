def newyear(t):
    while t:
        n = int(input())
        y = n%2020
        x = ((n-y)/2020)-y
        if (x*2020)+(y*2021)==n and x>=0:
            print("YES")
        else:
            print("NO")
        t -= 1
def main():
    t = int(input())
    newyear(t)
main()