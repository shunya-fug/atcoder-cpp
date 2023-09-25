#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N = random.randint(1, 10)  # TODO: edit here
    T = random.randint(1, 10)  # TODO: edit here
    M = random.randint(1, 10)  # TODO: edit here
    A = [None for _ in range(M)]
    B = [None for _ in range(M)]
    for i in range(M):
        A[i] = random.randint(1, 10)  # TODO: edit here
        B[i] = random.randint(1, 10)  # TODO: edit here
    print(N, T, M)
    for i in range(M):
        print(A[i], B[i])


if __name__ == "__main__":
    main()
