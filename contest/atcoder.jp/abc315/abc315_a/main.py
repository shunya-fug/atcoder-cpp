import re

if __name__ == '__main__':
    S = input()
    print(re.sub(r'[a|e|i|o|u]', '', S))
