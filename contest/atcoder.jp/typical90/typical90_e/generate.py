#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N = random.randint(1, 10**9)  # TODO: edit here
    B = random.randint(1, 10**9)  # TODO: edit here
    K = random.randint(1, 1000)  # TODO: edit here
    c = [None for _ in range(K)]
    for i in range(K):
        c[i] = random.randint(1, 10**9)  # TODO: edit here
    print(N, B, K)
    print(*[c[i] for i in range(K)])


if __name__ == "__main__":
    main()