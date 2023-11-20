#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    y = 0
    for m in range(x):
        try:
            print(my_list[m], end="")
            y += 1
        except IndexError:
            break
    print()
    return y
