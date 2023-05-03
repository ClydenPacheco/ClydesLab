t = int(input())
for i in range(t):
    n = int(input())
    steps = 0
    L = list(map(int,input().split()))
    minind = L.index(min(L))
    maxind = L.index(max(L))
    low = min(minind,maxind)
    high = max(minind,maxind)
    if low + 1 < len(L) - high:
        steps += low+1
        steps += min(high - steps + 1, len(L) - high)
    else:
        steps += len(L) - high
        steps += min(low + 1, len(L) - steps - low)
    print(steps)