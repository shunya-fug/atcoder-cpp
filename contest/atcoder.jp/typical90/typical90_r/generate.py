#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    T = random.randint(1, 10**9)  # TODO: edit here
    L = random.randint(1, 10**9)  # TODO: edit here
    X = random.randint(1, 10**9)  # TODO: edit here
    Y = random.randint(1, 10**9)  # TODO: edit here
    Q = random.randint(1, 1000)  # TODO: edit here
    E = [None for _ in range(Q)]
    for i in range(Q):
        E[i] = random.randint(1, 10**9)  # TODO: edit here
    print(T)
    print(L, X, Y)
    print(Q)
    for i in range(Q):
        print(E[i])


if __name__ == "__main__":
    main()
