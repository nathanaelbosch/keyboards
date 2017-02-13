f = open('adele.txt')

lines = f.readlines()


def line_to_message(line):
    if line.find(' - ') > -1:
        dt, rest = line.split(' - ', 1)
        if rest.find(': ') > -1:
            name, message = rest.split(': ', 1)
            return dt, name, message
        else:
            return dt, rest
    else:
        return [line]


lines = list(map(line_to_message, lines))

lens = list(map(lambda a: len(a), lines))
lines[lens.index(1)-3:lens.index(1)+3]