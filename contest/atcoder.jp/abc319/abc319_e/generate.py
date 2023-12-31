#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N = random.randint(1, 1000)  # TODO: edit here
    P = [None for _ in range(N - 1)]
    T = [None for _ in range(N - 1)]
    X = random.randint(1, 10**9)  # TODO: edit here
    Y = random.randint(1, 10**9)  # TODO: edit here
    for i in range(N - 1):
        P[i] = random.randint(1, 10**9)  # TODO: edit here
        T[i] = random.randint(1, 10**9)  # TODO: edit here
    Q = random.randint(1, 1000)  # TODO: edit here
    q = [None for _ in range(Q)]
    for i in range(Q):
        q[i] = random.randint(1, 10**9)  # TODO: edit here
    print(N, X, Y)
    for i in range(N - 1):
        print(P[i], T[i])
    print(Q)
    for i in range(Q):
        print(q[i])


if __name__ == "__main__":
    main()
