#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    # failed to analyze input format
    n = random.randint(1, 10**9)  # TODO: edit here
    a = [random.randint(1, 10**9) for _ in range(n)]  # TODO: edit here
    print(n)  # TODO: edit here
    print(*a)  # TODO: edit here


if __name__ == "__main__":
    main()
