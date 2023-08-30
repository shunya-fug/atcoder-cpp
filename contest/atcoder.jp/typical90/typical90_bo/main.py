import numpy as np

N, K = [int(cin) for cin in input().split()]
base_8_str = str(N)
for _ in range(K):
    base_8_str = np.base_repr(int(base_8_str, 8), 9).replace('8', '5')

print(base_8_str)
