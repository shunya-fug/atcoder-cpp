#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    N = random.randint(1, 1000)  # TODO: edit here
    p = [None for _ in range(N - 1)]
    t = [None for _ in range(N - 1)]
    s = [None for _ in range(N - 1)]
    g = [None for _ in range(N - 1)]
    for i in range(N - 1):
        p[i] = random.randint(1, 10**9)  # TODO: edit here
        t[i] = random.randint(1, 10**9)  # TODO: edit here
        s[i] = random.randint(1, 10**9)  # TODO: edit here
        g[i] = random.randint(1, 10**9)  # TODO: edit here
    print(N)
    for i in range(N - 1):
        print(p[i], t[i], s[i], g[i])


if __name__ == "__main__":
    main()
