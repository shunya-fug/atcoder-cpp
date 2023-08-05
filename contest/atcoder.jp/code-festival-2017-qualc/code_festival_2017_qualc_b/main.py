import numpy as np

if __name__ == '__main__':
    N = int(input())
    A = np.array(list(map(int, input().split())))
    ans = 0
    for i in range(3 ** N):
        if 0 < len(list(filter(lambda x: x % 2 == 0, [a + (0 if c == '0' else 1 if c == '1' else -1) for (a, c) in zip(A, str(np.base_repr(i, 3).zfill(N)))]))):
            ans += 1
    print(ans)
