#!/usr/bin/env python3
# from typing import *



# def solve(N: int, x: int, a: List[int]) -> int:
def solve(N, x, a):
    pass  # TODO: edit here

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    N = int(next(tokens))
    x = int(next(tokens))
    a = [None for _ in range(N)]
    for i in range(N):
        a[i] = int(next(tokens))
    assert next(tokens, None) is None
    a1 = solve(N, x, a)
    print(a1)

if __name__ == '__main__':
    main()
