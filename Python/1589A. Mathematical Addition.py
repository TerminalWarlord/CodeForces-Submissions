import io, os, sys
input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

def main():
    t = int(input().decode())
    while t>0:
        u, v = map(int, input().decode().split())
        x = (u*v - (u+v)*u);
        y = (x*v*(u+v)) - (u*v*x);
        sys.stdout.write(str(x) + " " +str(y//x))
        sys.stdout.write("\n")
        t-=1
main()