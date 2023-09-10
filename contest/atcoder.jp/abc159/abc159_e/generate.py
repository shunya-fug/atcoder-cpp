#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    H = random.randint(1, 10)  # TODO: edit here
    W = random.randint(1, 10)  # TODO: edit here
    S = [[None for _ in range(W)] for _ in range(H + W + 2)]
    K = random.randint(1, 10)  # TODO: edit here
    for j in range(H + 2):
        for i in range(W):
            S[i + j][i] = random.randint(1, 10)  # TODO: edit here
    print(H, W, K)
    for j in range(H + 2):
        print(*[S[i + j][i] for i in range(W)])


if __name__ == "__main__":
    main()
