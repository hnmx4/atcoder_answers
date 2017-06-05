lim = 100000


def is_prime(x):
    if x < 2:
        return False
    for i in range(2, x):
        if x % i == 0:
            return False
    return True


def check_rect(x, height, width):
    return True if (is_prime(x) and (x < height or x < width)) or not is_prime(x) else False


def main(h, w):
    s = h * w
    peace = [int(s / 3) for i in range(3)]
    mod = s % 3

    if mod == 2:
        peace[0] += 1
        peace[1] += 1
    elif mod == 1:
        peace[0] += 1


    lim_2 = int(lim / 2)
    a = lim_2
    b = 0
    for hi in range(h, s, h):
        if abs(peace[0] - hi) < a:
            a = abs(peace[0] - hi)
            b = hi
    for wi in range(w, s, w):
        if abs(peace[0] - wi) < a:
            a = abs(peace[0] - wi)
            b = wi

    peace[0] = b
    ss = s - b
    if ss % 2 == 0:
        peace[1], peace[2] = [int(ss / 2) for i in range(2)]
    else:
        peace[1] = int(ss / 2) + 1
        peace[2] = int(ss / 2) - 1

    return max(peace) - min(peace)


foo, bar = list(map(int, input().split()))
print(main(foo, bar))
